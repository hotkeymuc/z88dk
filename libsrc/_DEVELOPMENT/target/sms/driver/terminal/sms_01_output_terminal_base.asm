
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; SMS_01_OUTPUT_TERMINAL_BASE
; character output driver base class for sms
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; Windowed output terminal for fixed width fonts.
;
; ;;;;;;;;;;;;;;;;;;;;
; DRIVER CLASS DIAGRAM
; ;;;;;;;;;;;;;;;;;;;;
;
; CONSOLE_01_OUTPUT_TERMINAL (root, abstract)
; SMS_01_OUTPUT_TERMINAL_BASE (abstract)
;
; This driver is a modification of CONSOLE_01_OUTPUT_TERMINAL_CHAR
; with input terminal features removed.
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; MESSAGES CONSUMED FROM STDIO
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; * STDIO_MSG_PUTC
;   Generates multiple OTERM_MSG_PUTC messages.
;
; * STDIO_MSG_WRIT
;   Generates multiple OTERM_MSG_PUTC messages.
;
; * STDIO_MSG_SEEK -> no error, do nothing
; * STDIO_MSG_FLSH -> no error, do nothing
; * STDIO_MSG_ICTL
; * STDIO_MSG_CLOS -> no error, do nothing
;
; Any other messages are reported as errors via
; error_enotsup_zc
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; MESSAGES CONSUMED FROM CONSOLE_01_OUTPUT_TERMINAL
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   * OTERM_MSG_PUTC
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; MESSAGES GENERATED FOR DERIVED DRIVERS
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   * OTERM_MSG_TTY (optional)
;
;     enter  :  c = char to output
;     exit   :  c = char to output (possibly modified)
;               carry reset if tty emulation absorbs char
;     can use:  af, bc, de, hl
;
;     The driver should call the tty emulation module.
;     If not implemented characters are output without processing.
;
;   * OTERM_MSG_PRINTC
;
;     enter  :  c = ascii code
;               b = 255 if not supplied by iterm
;               l = absolute x coordinate
;               h = absolute y coordinate
;     can use:  af, bc, de, hl, af'
;
;     Print the char to screen at given character coordinate.
;
;   * OTERM_MSG_BELL (optional)
;
;     can use:  af, bc, de, hl
;
;     Sound the terminal's bell.
;
;   * OTERM_MSG_SCROLL
;
;     enter  :   c = number of rows to scroll
;     can use:  af, bc, de, hl
;
;     Scroll the window upward 'c' character rows.
;
;   * OTERM_MSG_CLS
;
;     can use:  af, bc, de, hl
;
;     Clear the window.
;
;   * OTERM_MSG_PAUSE (optional)
;
;     can use:  af, bc, de, hl
;
;     The scroll count has reached zero so the driver
;     should pause the output somehow.
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; IOCTLs UNDERSTOOD BY THIS DRIVER
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   * IOCTL_OTERM_CRLF
;     enable / disable crlf processing
;
;   * IOCTL_OTERM_BELL
;     enable / disable terminal bell
;
;   * IOCTL_OTERM_COOK
;     enable / disable cook mode (tty emulation)
;
;   * IOCTL_OTERM_PAUSE
;     enable / disable pause when window filled
;
;   * IOCTL_OTERM_PAGE
;     select scroll or page mode
;
;   * IOCTL_OTERM_CLEAR
;     enable / disable clear window when in page mode
;
;   * IOCTL_OTERM_CLS
;     clear window, set (x,y) = (0,0)
;
;   * IOCTL_OTERM_RESET_SCROLL
;     reset scroll count
;
;   * IOCTL_OTERM_GET_WINDOW_COORD
;     get coord of top left corner of window
;
;   * IOCTL_OTERM_SET_WINDOW_COORD
;     set coord of top left corner of window
;
;   * IOCTL_OTERM_GET_WINDOW_RECT
;     get window size
;
;   * IOCTL_OTERM_SET_WINDOW_RECT
;     set window size
;
;   * IOCTL_OTERM_GET_CURSOR_COORD
;
;   * IOCTL_OTERM_SET_CURSOR_COORD
;
;   * IOCTL_OTERM_GET_OTERM
;
;   * IOCTL_OTERM_SCROLL
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;
; BYTES RESERVED IN FDSTRUCT
; ;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; offset (wrt FDSTRUCT.JP)  description
;
;  8..13                    mutex
;   14                      x coordinate
;   15                      y coordinate
;   16                      window.x
;   17                      window.width
;   18                      window.y
;   19                      window.height
;   20                      scroll_limit

SECTION code_driver
SECTION code_driver_terminal_output

PUBLIC sms_01_output_terminal_base

EXTERN OTERM_MSG_PUTC, OTERM_MSG_TTY, STDIO_MSG_ICTL, OTERM_MSG_BELL

EXTERN error_zc, console_01_output_terminal
EXTERN console_01_output_char_oterm_msg_putc
EXTERN console_01_output_char_stdio_msg_ictl

sms_01_output_terminal_base:

   ; messages generated by stdio

   cp OTERM_MSG_PUTC
   jp z, console_01_output_char_oterm_msg_putc

   cp OTERM_MSG_TTY   ;; prevent error generation for unimplemented message
   jp z, error_zc     ;; placed further up to speed up putchar

   cp STDIO_MSG_ICTL
   jp z, console_01_output_char_stdio_msg_ictl
   
   ; prevent error generation for unimplemented optional messages
   
   cp OTERM_MSG_BELL
   jp z, error_zc

   jp console_01_output_terminal       ; forward to library
