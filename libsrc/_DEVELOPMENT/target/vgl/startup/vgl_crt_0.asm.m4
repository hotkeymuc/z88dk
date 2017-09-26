dnl############################################################
dnl##        VGL_CRT_0.ASM.M4 - V-TECH GENIUS LEADER         ##
dnl############################################################
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                 V-Tech Genius Leader target               ;;
;;    generated from target/vgl/startup/vgl_crt_0.asm.m4     ;;
;;                                                           ;;
;;                 ?flat 64k address space                   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; GLOBAL SYMBOLS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

include "config_vgl_public.inc"	; This will be a file containing all the defined constants from the config directory.  When the library is built, the file will be generated.

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; CRT AND CLIB CONFIGURATION ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

include "../crt_defaults.inc"
include "crt_config.inc"
include(`../crt_rules.inc')
include(`vgl_rules.inc')	; This file will process target-specific pragmas, of which you will initially have none.

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; SET UP MEMORY MAP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

include "crt_memory_map.inc"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; INSTANTIATE DRIVERS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


dnl############################################################
dnl## LIST OF AVAILABLE DRIVERS WITH STATIC INSTANTIATORS #####
dnl############################################################
dnl
dnl## input terminals
dnl
dnl#include(`driver/character/vgl_00_input_char.m4')dnl
dnl#include(`driver/terminal/vgl_01_input_kbd.m4')dnl
dnl
dnl## output terminals
dnl
dnl#include(`driver/character/vgl_00_output_char.m4')dnl
dnl#include(`driver/terminal/vgl_01_output_char.m4')dnl
dnl
dnl## file dup
dnl
dnl#include(`../m4_file_dup.m4')dnl
dnl
dnl## empty fd slot
dnl
dnl---dnl
dnl
dnl############################################################
dnl## INSTANTIATE DRIVERS #####################################
dnl############################################################


include(`../clib_instantiate_begin.m4')


dnl; Cheat sheet:
dnl;   include(`driver/character/vgl_00_input_char.m4')dnl
dnl;   m4_vgl_00_input_char(_stdin, 0x0100)
dnl;   include(`driver/terminal/vgl_01_input_kbd.m4')dnl
dnl;   m4_vgl_01_input_kbd(_stdin, __i_fcntl_fdstruct_1, CRT_ITERM_TERMINAL_FLAGS, M4__CRT_ITERM_EDIT_BUFFER_SIZE)

ifelse(eval(M4__CRT_INCLUDE_DRIVER_INSTANTIATION == 0), 1,`
   include(`driver/terminal/vgl_01_input_kbd.m4')dnl
   m4_vgl_01_input_kbd(_stdin, __i_fcntl_fdstruct_1, CRT_ITERM_TERMINAL_FLAGS, M4__CRT_ITERM_EDIT_BUFFER_SIZE)
   
   include(`driver/terminal/vgl_01_output_char.m4')dnl
   m4_vgl_01_output_char(_stdout, CRT_OTERM_TERMINAL_FLAGS,	0, 0,	0, CRT_OTERM_WINDOW_WIDTH,	0, CRT_OTERM_WINDOW_HEIGHT,	0)
   
   include(`../m4_file_dup.m4')dnl
   m4_file_dup(_stderr, 0x80, __i_fcntl_fdstruct_1)
',
`
   include(`crt_driver_instantiation.asm.m4')
')

include(`../clib_instantiate_end.m4')

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; STARTUP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

SECTION CODE

PUBLIC __Start, __Exit

EXTERN _main




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ROM SIGNATURES ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; These bytes indicate what kind of cartridge we have.
; They must be the very first bytes in the ROM
; They could also be moved to the "create-app" part, but this provides easier debugging possibilities for now

IF (startup=1)
	
	IF (TAR__crt_autostart=1)
	
		include "startup/vgl_signature_autostart.inc"
	
	ELSE
	
		include "startup/vgl_signature_default.inc"
	
	ENDIF
	
ELSE

	IF (startup=100)
		include "startup/vgl_signature_quiz.inc"
	ENDIF

	IF (startup=101)
		include "startup/vgl_signature_sram.inc"
	ENDIF

ENDIF


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; USER PREAMBLE ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

IF __crt_include_preamble

   include "crt_preamble.asm"
   SECTION CODE

ENDIF

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; PAGE ZERO ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

IF (ASMPC = 0) && (__crt_org_code = 0)

   include "../crt_page_zero_z80.inc"

ENDIF

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; CRT INIT ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;@FIXME: This is just for bare bone debugging. Provides some essential debug tools. Please remove when not needed any more.
include "startup/vgl_debug.inc"


__Start:

   include "../crt_start_di.inc"
   include "../crt_save_sp.inc"

__Restart:

;   include "../crt_init_sp.inc"
   
   ; command line
   
   IF (__crt_enable_commandline = 1) || (__crt_enable_commandline >= 3)
   
      include "../crt_cmdline_empty.inc"
   
   ENDIF

__Restart_2:

   IF __crt_enable_commandline >= 1

      push hl                  ; argv
      push bc                  ; argc

   ENDIF

   ; initialize data section

   include "../clib_init_data.inc"

   ; initialize bss section

   include "../clib_init_bss.inc"

   ; interrupt mode
   
   include "../crt_set_interrupt_mode.inc"

SECTION code_crt_init          ; user and library initialization

   ; Prepare hardware (timers etc.)
   
   
SECTION code_crt_main

   include "../crt_start_ei.inc"

   ; call user program
   
   call _main                  ; hl = return status

   ; run exit stack

   IF __clib_exit_stack_size > 0
   
      EXTERN asm_exit
      jp asm_exit              ; exit function jumps to __Exit
   
   ENDIF

__Exit:

   IF !((__crt_on_exit & 0x10000) && (__crt_on_exit & 0x8))
   
      ; not restarting
      
      push hl                  ; save return status
   
   ENDIF

SECTION code_crt_exit          ; user and library cleanup
SECTION code_crt_return

   ; close files
   
   include "../clib_close.inc"

   ; terminate
   
   include "../crt_exit_eidi.inc"
   include "../crt_restore_sp.inc"
   include "../crt_program_exit.inc"      

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; RUNTIME VARS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

include "../crt_jump_vectors_z80.inc"

IF (__crt_on_exit & 0x10000) && ((__crt_on_exit & 0x6) || ((__crt_on_exit & 0x8) && (__register_sp = -1)))

   SECTION BSS_UNINITIALIZED
   __sp_or_ret:  defw 0

ENDIF

include "../clib_variables.inc"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; CLIB STUBS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

include "../clib_stubs.inc"
