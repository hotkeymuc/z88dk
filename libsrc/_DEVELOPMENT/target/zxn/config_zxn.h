





#ifndef __CONFIG_Z88DK_H_
#define __CONFIG_Z88DK_H_

// Automatically Generated at Library Build Time














#undef  __Z88DK
#define __Z88DK  1992












#undef  __ZXNEXT
#define __ZXNEXT    1

#undef  __SPECTRUM
#define __SPECTRUM  2

#define __SPECTRUM_48  1
#define __SPECTRUM_128  2
#define __SPECTRUM_128_P2  4
#define __SPECTRUM_128_P2A  8
#define __SPECTRUM_128_P3  16
#define __SPECTRUM_PENTAGON  32

#define __USE_SPECTRUM_128_SECOND_DFILE  0

#define __IO_REGISTRY_REG  0x243b
#define __IO_REGISTRY_DAT  0x253b

#define __IO_REGISTRY_REG_MACHINE_ID  0

#define __IO_REGISTRY_REG_VERSION  1
#define __IO_RRV_MAJOR  0xf0
#define __IO_RRV_MINOR  0x0f

#define __IO_REGISTRY_REG_RESET  2
#define __IO_RRR_POWER_ON_RESET  0x04
#define __IO_RRR_HARD_RESET  0x02
#define __IO_RRR_SOFT_RESET  0x01

#define __IO_REGISTRY_REG_MACHINE_TYPE  3
#define __IO_RRMT_LOCK_TIMING  0x80
#define __IO_RRMT_TIMING_48  0x10
#define __IO_RRMT_TIMING_128  0x20
#define __IO_RRMT_TIMING_P3E  0x30
#define __IO_RRMT_TIMING_PENTAGON  0x40
#define __IO_RRMT_CONFIG_MODE  0x00
#define __IO_RRMT_48  0x01
#define __IO_RRMT_128  0x02
#define __IO_RRMT_P3E  0x03
#define __IO_RRMT_PENTAGON  0x04

#define __IO_REGISTRY_REG_PAGE_RAM  4
#define __IO_RRPR_MASK  0x3f

#define __IO_REGISTRY_REG_PERIPHERAL_1  5
#define __IO_RRP1_JOY1_SINCLAIR  0x00
#define __IO_RRP1_JOY1_KEMPSTON  0x40
#define __IO_RRP1_JOY1_CURSOR  0x80
#define __IO_RRP1_JOY2_SINCLAIR  0x00
#define __IO_RRP1_JOY2_KEMPSTON  0x10
#define __IO_RRP1_JOY2_CURSOR  0x20
#define __IO_RRP1_RATE_50  0x00
#define __IO_RRP1_RATE_60  0x04
#define __IO_RRP1_ENABLE_SCANLINES  0x02
#define __IO_RRP1_ENABLE_SCANDOUBLER  0x01

#define __IO_REGISTRY_REG_PERIPHERAL_2  6
#define __IO_RRP2_ENABLE_TURBO  0x80
#define __IO_RRP2_DAC_I2S  0x00
#define __IO_RRP2_DAC_JAP  0x40
#define __IO_RRP2_ENABLE_LIGHTPEN  0x20
#define __IO_RRP2_ENABLE_DIVMMC  0x10
#define __IO_RRP2_ENABLE_MULTIFACE  0x08
#define __IO_RRP2_PS2_KEYBOARD  0x00
#define __IO_RRP2_PS2_MOUSE  0x04
#define __IO_RRP2_PSGMODE_AY  0x03
#define __IO_RRP2_PSGMODE_YM  0x02
#define __IO_RRP2_PSGMODE_DISABLE  0x00

#define __IO_REGISTRY_REG_TURBO_MODE  7
#define __IO_RRTM_3MHZ  0x00
#define __IO_RRTM_7MHZ  0x01
#define __IO_RRTM_14MHZ  0x02
#define __IO_RRTM_28MHZ  0x03

#define __IO_REGISTRY_REG_PERIPHERAL_3  8
#define __IO_RRP3_STEREO_ABC  0x00
#define __IO_RRP3_STEREO_ACB  0x20
#define __IO_RRP3_ENABLE_SPEAKER  0x10
#define __IO_RRP3_ENABLE_SPECDRUM  0x08
#define __IO_RRP3_ENABLE_COVOX  0x08
#define __IO_RRP3_ENABLE_TIMEX  0x04
#define __IO_RRP3_ENABLE_TURBOSOUND  0x02

#define __IO_REGISTRY_REG_ANTI_BRICK  10
#define __IO_RRAB_START_NORMAL_CORE  0x80
#define __IO_RRAB_BUTTON_DIVMMC  0x02
#define __IO_RRAB_BUTTON_MULTIFACE  0x01

#define __IO_REGISTRY_REG_LAYER_2_RAM_PAGE  18
#define __IO_RRL2RP_MASK  0x3f

#define __IO_REGISTRY_REG_LAYER_2_SHADOW_RAM_PAGE  19
#define __IO_RRL2SRP_MASK  0x3f

#define __IO_REGISTRY_REG_LAYER_2_GLOBAL_TRANSPARENCY_COLOR  20

#define __IO_REGISTRY_REG_SPRITE_LAYER_SYSTEM  21
#define __IO_RRSLS_ENABLE_LORES  0x80
#define __IO_RRSLS_LAYER_PRIORITY_SLU  0x00
#define __IO_RRSLS_LAYER_PRIORITY_LSU  0x04
#define __IO_RRSLS_LAYER_PRIORITY_SUL  0x08
#define __IO_RRSLS_LAYER_PRIORITY_LUS  0x0c
#define __IO_RRSLS_LAYER_PRIORITY_USL  0x10
#define __IO_RRSLS_LAYER_PRIORITY_ULS  0x14
#define __IO_RRSLS_SPRITES_OVER_BORDER  0x02
#define __IO_RRSLS_SPRITES_VISIBLE  0x01

#define __IO_REGISTRY_REG_LAYER_2_OFFSET_X  22

#define __IO_REGISTRY_REG_LAYER_2_OFFSET_Y  23

#define __IO_REGISTRY_REG_ACTIVE_VIDEO_LINE_MSB  30

#define __IO_REGISTRY_REG_ACTIVE_VIDEO_LINE_LSB  31

#define __IO_REGISTRY_REG_RASTER_LINE_INTERRUPT_CONTROL  34
#define __IO_RRRLIC_INTERRUPT_FLAG  0x80
#define __IO_RRRLIC_DISABLE_ULA_INTERRUPT  0x04
#define __IO_RRRLIC_ENABLE_LINE_INTERRUPT  0x02
#define __IO_RRRLIC_LINE_INTERRUPT_VALUE_MSB  0x01

#define __IO_REGISTRY_REG_RASTER_LINE_INTERRUPT_VALUE_LSB  35

#define __IO_REGISTRY_REG_KEYMAP_ADDRESS_MSB  40

#define __IO_REGISTRY_REG_KEYMAP_ADDRESS_LSB  41

#define __IO_REGISTRY_REG_KEYMAP_DATA_MSB  42

#define __IO_REGISTRY_REG_KEYMAP_DATA_LSB  43

#define __IO_REGISTRY_REG_LORES_OFFSET_X  50

#define __IO_REGISTRY_REG_LORES_OFFSET_Y  51

#define __IO_REGISTRY_REG_ULA_PALETTE_INDEX  64

#define __IO_REGISTRY_REG_PALETTE_VALUE  65

#define __IO_REGISTRY_REG_PALETTE_FORMAT  66

#define __IO_REGISTRY_REG_PALETTE_CONTROL  67
#define __IO_RRPC_DISABLE_FLASH  0x01

#define __IO_REGISTRY_REG_DEBUG_LEDS  0xff

#define __IO_LAYER_2_ACCESS  0x123b
#define __IO_L2A_ENABLE_LOWER_16K  0x01
#define __IO_L2A_ENABLE_LAYER_2  0x02
#define __IO_L2A_ENABLE_LAYER_2_SHADOW_BUFFER  0x08
#define __IO_L2A_VRAM_BANK_SELECT_MASK  0xc0
#define __IO_L2A_VRAM_BANK_SELECT_0  0x00
#define __IO_L2A_VRAM_BANK_SELECT_1  0x40
#define __IO_L2A_VRAM_BANK_SELECT_2  0x80

#define __IO_SPRITE_SLOT  0x303b

#define __IO_SPRITE_FLAGS  0x303b
#define __IO_SF_MAX_SPRITES_PER_LINE  0x02
#define __IO_SF_COLLISION  0x01

#define __IO_SPRITE_PALETTE  0x53

#define __IO_SPRITE_ATTRIBUTE  0x57

#define __IO_SPRITE_PATTERN  0x5b

#define __IO_AUDIO_SELECT  0xfffd
#define __IO_AS_ENABLE  0xfc
#define __IO_AS_LEFT_ENABLE  0xdc
#define __IO_AS_RIGHT_ENABLE  0xbc
#define __IO_AS_PSG_1  0x9f
#define __IO_AS_PSG_2  0x9e
#define __IO_AS_PSG_3  0x9d
#define __IO_AS_SID  0x9c

#define __IO_AUDIO_REG  0xfffd
#define __IO_AUDIO_DAT  0xbffd












#undef  __Z80
#define __Z80  0x01

#define __Z80_NMOS  0x01
#define __Z80_CMOS  0x02

#define __CPU_CLOCK  28000000

#define __CPU_INFO  0x00

#define __CPU_INFO_ENABLE_SLL  0x01












#define __CLIB_OPT_MULTITHREAD  0x00

#define __CLIB_OPT_MULTITHREAD_LOCK_HEAPS  0x01
#define __CLIB_OPT_MULTITHREAD_LOCK_FILES  0x02
#define __CLIB_OPT_MULTITHREAD_LOCK_FLIST  0x04
#define __CLIB_OPT_MULTITHREAD_LOCK_FDTBL  0x08
#define __CLIB_OPT_MULTITHREAD_LOCK_FDSTR  0x10

#define __CLIB_OPT_IMATH  0

#define __CLIB_OPT_IMATH_FAST  0x0f

#define __CLIB_OPT_IMATH_FAST_DIV_UNROLL  0x01
#define __CLIB_OPT_IMATH_FAST_DIV_LZEROS  0x02
#define __CLIB_OPT_IMATH_FAST_MUL_UNROLL  0x04
#define __CLIB_OPT_IMATH_FAST_MUL_LZEROS  0x08
#define __CLIB_OPT_IMATH_FAST_LIA  0x80

#define __CLIB_OPT_IMATH_SELECT  0x00

#define __CLIB_OPT_IMATH_SELECT_FAST_ASR  0x01
#define __CLIB_OPT_IMATH_SELECT_FAST_LSR  0x02
#define __CLIB_OPT_IMATH_SELECT_FAST_LSL  0x04

#define __CLIB_OPT_TXT2NUM  0x04

#define __CLIB_OPT_TXT2NUM_INT_BIN  0x01
#define __CLIB_OPT_TXT2NUM_INT_OCT  0x02
#define __CLIB_OPT_TXT2NUM_INT_DEC  0x04
#define __CLIB_OPT_TXT2NUM_INT_HEX  0x08

#define __CLIB_OPT_TXT2NUM_LONG_BIN  0x10
#define __CLIB_OPT_TXT2NUM_LONG_OCT  0x20
#define __CLIB_OPT_TXT2NUM_LONG_DEC  0x40
#define __CLIB_OPT_TXT2NUM_LONG_HEX  0x80

#define __CLIB_OPT_TXT2NUM_SELECT  0x00

#define __CLIB_OPT_TXT2NUM_SELECT_FAST_BIN  0x01
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_OCT  0x02
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_DEC  0x04
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_HEX  0x08

#define __CLIB_OPT_NUM2TXT  0x00

#define __CLIB_OPT_NUM2TXT_INT_BIN  0x01
#define __CLIB_OPT_NUM2TXT_INT_OCT  0x02
#define __CLIB_OPT_NUM2TXT_INT_DEC  0x04
#define __CLIB_OPT_NUM2TXT_INT_HEX  0x08

#define __CLIB_OPT_NUM2TXT_LONG_BIN  0x10
#define __CLIB_OPT_NUM2TXT_LONG_OCT  0x20
#define __CLIB_OPT_NUM2TXT_LONG_DEC  0x40
#define __CLIB_OPT_NUM2TXT_LONG_HEX  0x80

#define __CLIB_OPT_NUM2TXT_SELECT  0x00

#define __CLIB_OPT_NUM2TXT_SELECT_FAST_BIN  0x01
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_OCT  0x02
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_DEC  0x04
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_HEX  0x08

#define __CLIB_OPT_STDIO  0x00

#define __CLIB_OPT_STDIO_VALID  0x01

#define CHAR_CR  13
#define CHAR_LF  10
#define CHAR_BS  12
#define CHAR_ESC  27
#define CHAR_CAPS  6
#define CHAR_BELL  7
#define CHAR_CTRL_C  3
#define CHAR_CTRL_D  4
#define CHAR_CTRL_Z  26
#define CHAR_CURSOR_UC  45
#define CHAR_CURSOR_LC  95
#define CHAR_PASSWORD  42

#define __CLIB_OPT_PRINTF  0x002ff6ff

#define __CLIB_OPT_PRINTF_d  0x00000001
#define __CLIB_OPT_PRINTF_u  0x00000002
#define __CLIB_OPT_PRINTF_x  0x00000004
#define __CLIB_OPT_PRINTF_X  0x00000008
#define __CLIB_OPT_PRINTF_o  0x00000010
#define __CLIB_OPT_PRINTF_n  0x00000020
#define __CLIB_OPT_PRINTF_i  0x00000040
#define __CLIB_OPT_PRINTF_p  0x00000080
#define __CLIB_OPT_PRINTF_B  0x00000100
#define __CLIB_OPT_PRINTF_s  0x00000200
#define __CLIB_OPT_PRINTF_c  0x00000400
#define __CLIB_OPT_PRINTF_I  0x00000800
#define __CLIB_OPT_PRINTF_ld  0x00001000
#define __CLIB_OPT_PRINTF_lu  0x00002000
#define __CLIB_OPT_PRINTF_lx  0x00004000
#define __CLIB_OPT_PRINTF_lX  0x00008000
#define __CLIB_OPT_PRINTF_lo  0x00010000
#define __CLIB_OPT_PRINTF_ln  0x00020000
#define __CLIB_OPT_PRINTF_li  0x00040000
#define __CLIB_OPT_PRINTF_lp  0x00080000
#define __CLIB_OPT_PRINTF_lB  0x00100000
#define __CLIB_OPT_PRINTF_a  0x00400000
#define __CLIB_OPT_PRINTF_A  0x00800000
#define __CLIB_OPT_PRINTF_e  0x01000000
#define __CLIB_OPT_PRINTF_E  0x02000000
#define __CLIB_OPT_PRINTF_f  0x04000000
#define __CLIB_OPT_PRINTF_F  0x08000000
#define __CLIB_OPT_PRINTF_g  0x10000000
#define __CLIB_OPT_PRINTF_G  0x20000000

#define __CLIB_OPT_PRINTF_2  0x00

#define __CLIB_OPT_PRINTF_2_lld  0x01
#define __CLIB_OPT_PRINTF_2_llu  0x02
#define __CLIB_OPT_PRINTF_2_llx  0x04
#define __CLIB_OPT_PRINTF_2_llX  0x08
#define __CLIB_OPT_PRINTF_2_llo  0x10
#define __CLIB_OPT_PRINTF_2_lli  0x40

#define __CLIB_OPT_SCANF  0x002ff6ff

#define __CLIB_OPT_SCANF_d  0x00000001
#define __CLIB_OPT_SCANF_u  0x00000002
#define __CLIB_OPT_SCANF_x  0x00000004
#define __CLIB_OPT_SCANF_X  0x00000008
#define __CLIB_OPT_SCANF_o  0x00000010
#define __CLIB_OPT_SCANF_n  0x00000020
#define __CLIB_OPT_SCANF_i  0x00000040
#define __CLIB_OPT_SCANF_p  0x00000080
#define __CLIB_OPT_SCANF_B  0x00000100
#define __CLIB_OPT_SCANF_s  0x00000200
#define __CLIB_OPT_SCANF_c  0x00000400
#define __CLIB_OPT_SCANF_I  0x00000800
#define __CLIB_OPT_SCANF_ld  0x00001000
#define __CLIB_OPT_SCANF_lu  0x00002000
#define __CLIB_OPT_SCANF_lx  0x00004000
#define __CLIB_OPT_SCANF_lX  0x00008000
#define __CLIB_OPT_SCANF_lo  0x00010000
#define __CLIB_OPT_SCANF_ln  0x00020000
#define __CLIB_OPT_SCANF_li  0x00040000
#define __CLIB_OPT_SCANF_lp  0x00080000
#define __CLIB_OPT_SCANF_lB  0x00100000
#define __CLIB_OPT_SCANF_BRACKET  0x00200000
#define __CLIB_OPT_SCANF_a  0x00400000
#define __CLIB_OPT_SCANF_A  0x00800000
#define __CLIB_OPT_SCANF_e  0x01000000
#define __CLIB_OPT_SCANF_E  0x02000000
#define __CLIB_OPT_SCANF_f  0x04000000
#define __CLIB_OPT_SCANF_F  0x08000000
#define __CLIB_OPT_SCANF_g  0x10000000
#define __CLIB_OPT_SCANF_G  0x20000000

#define __CLIB_OPT_SCANF_2  0x00

#define __CLIB_OPT_SCANF_2_lld  0x01
#define __CLIB_OPT_SCANF_2_llu  0x02
#define __CLIB_OPT_SCANF_2_llx  0x04
#define __CLIB_OPT_SCANF_2_llX  0x08
#define __CLIB_OPT_SCANF_2_llo  0x10
#define __CLIB_OPT_SCANF_2_lli  0x40

#define __CLIB_OPT_UNROLL  0x00

#define __CLIB_OPT_UNROLL_MEMCPY  0x01
#define __CLIB_OPT_UNROLL_MEMSET  0x02
#define __CLIB_OPT_UNROLL_OTIR  0x10
#define __CLIB_OPT_UNROLL_LDIR  0x20
#define __CLIB_OPT_UNROLL_USER_SMC  0x40
#define __CLIB_OPT_UNROLL_LIB_SMC  0x80

#define __CLIB_OPT_STRTOD  0x00

#define __CLIB_OPT_STRTOD_NAN  0x01
#define __CLIB_OPT_STRTOD_INF  0x01
#define __CLIB_OPT_STRTOD_HEX  0x02

#define __CLIB_OPT_SORT  1

#define __CLIB_OPT_SORT_INSERTION  0
#define __CLIB_OPT_SORT_SHELL  1
#define __CLIB_OPT_SORT_QUICK  2

#define __CLIB_OPT_SORT_QSORT  0x0c

#define __CLIB_OPT_SORT_QSORT_PIVOT  0x3
#define __CLIB_OPT_SORT_QSORT_PIVOT_MID  0x0
#define __CLIB_OPT_SORT_QSORT_PIVOT_RAN  0x1
#define __CLIB_OPT_SORT_QSORT_ENABLE_INSERTION  0x04
#define __CLIB_OPT_SORT_QSORT_ENABLE_EQUAL  0x08

#define __CLIB_OPT_ERROR  0x00

#define __CLIB_OPT_ERROR_ENABLED  0x01
#define __CLIB_OPT_ERROR_VERBOSE  0x02
















#define __EOK  0
#define __EACCES  1
#define __EBADF  2
#define __EBDFD  3
#define __EDOM  4
#define __EFBIG  5
#define __EINVAL  6
#define __EMFILE  7
#define __ENFILE  8
#define __ENOLCK  9
#define __ENOMEM  10
#define __ENOTSUP  11
#define __EOVERFLOW  12
#define __ERANGE  13
#define __ESTAT  14
#define __EAGAIN  15
#define __EWOULDBLOCK  15

#define __ERROR_NEXT  50

#define STDIO_SEEK_SET  0
#define STDIO_SEEK_CUR  1
#define STDIO_SEEK_END  2

#define STDIO_MSG_PUTC  1
#define STDIO_MSG_WRIT  2
#define STDIO_MSG_GETC  3
#define STDIO_MSG_EATC  4
#define STDIO_MSG_READ  5
#define STDIO_MSG_SEEK  6
#define STDIO_MSG_ICTL  7
#define STDIO_MSG_FLSH  8
#define STDIO_MSG_CLOS  9

#define ITERM_MSG_GETC  15
#define ITERM_MSG_INTERRUPT  16
#define ITERM_MSG_PUTC  17
#define ITERM_MSG_PRINT_CURSOR  18
#define ITERM_MSG_ERASE_CURSOR  19
#define ITERM_MSG_ERASE_CURSOR_PWD  20
#define ITERM_MSG_BS  21
#define ITERM_MSG_BS_PWD  22
#define ITERM_MSG_READLINE_BEGIN  23
#define ITERM_MSG_READLINE_END  24
#define ITERM_MSG_BELL  25
      
#define __MESSAGE_ITERM_NEXT__  26

#define OTERM_MSG_PUTC  30
#define OTERM_MSG_TTY  31
#define OTERM_MSG_PRINTC  32
#define OTERM_MSG_SCROLL  33
#define OTERM_MSG_CLS  34
#define OTERM_MSG_PAUSE  35
#define OTERM_MSG_BELL  36
#define OTERM_MSG_PSCROLL  37
      
#define __MESSAGE_OTERM_NEXT__  38

#define ICHAR_MSG_GETC  15
#define OCHAR_MSG_PUTC_BIN  30
#define OCHAR_MSG_PUTC  32
  
#define __MESSAGE_NEXT__  45

#define mtx_plain  0x01
#define mtx_recursive  0x02
#define mtx_timed  0x04

#define thrd_success  0x00
#define thrd_error  0x01
#define thrd_nomem  0x02
#define thrd_busy  0x04
#define thrd_timedout  0x08

#define IOCTL_RESET  0x0000

#define IOCTL_ITERM_ECHO  0xc081
#define IOCTL_ITERM_PASS  0xc041
#define IOCTL_ITERM_LINE  0xc021
#define IOCTL_ITERM_COOK  0xc011
#define IOCTL_ITERM_CAPS  0xc009
#define IOCTL_ITERM_CRLF  0xc101
#define IOCTL_ITERM_CURS  0xc201
   
#define IOCTL_ITERM_TIE  0x0201
#define IOCTL_ITERM_GET_EDITBUF  0x0381
#define IOCTL_ITERM_SET_EDITBUF  0x0301

#define IOCTL_OTERM_PAGE  0xc082
#define IOCTL_OTERM_PAUSE  0xc042
#define IOCTL_OTERM_COOK  0xc022
#define IOCTL_OTERM_CRLF  0xc012
#define IOCTL_OTERM_CLEAR  0xe002
#define IOCTL_OTERM_SIGNAL  0xc202
#define IOCTL_OTERM_BELL  0xc102

#define IOCTL_OTERM_CLS  0x0102
#define IOCTL_OTERM_RESET_SCROLL  0x0202
#define IOCTL_OTERM_GET_WINDOW_COORD  0x0382
#define IOCTL_OTERM_SET_WINDOW_COORD  0x0302
#define IOCTL_OTERM_GET_WINDOW_RECT  0x0482
#define IOCTL_OTERM_SET_WINDOW_RECT  0x0402
#define IOCTL_OTERM_GET_CURSOR_COORD  0x0582
#define IOCTL_OTERM_SET_CURSOR_COORD  0x0502
#define IOCTL_OTERM_GET_OTERM  0x0602
#define IOCTL_OTERM_SCROLL  0x0702
#define IOCTL_OTERM_FONT  0x0802

#define IOCTL_OTERM_FZX_GET_PAPER_COORD  0x0a82
#define IOCTL_OTERM_FZX_SET_PAPER_COORD  0x0a02
#define IOCTL_OTERM_FZX_GET_PAPER_RECT  0x0b82
#define IOCTL_OTERM_FZX_SET_PAPER_RECT  0x0b02
#define IOCTL_OTERM_FZX_LEFT_MARGIN  0x0c02
#define IOCTL_OTERM_FZX_LINE_SPACING  0x0d02
#define IOCTL_OTERM_FZX_SPACE_EXPAND  0x0e02
#define IOCTL_OTERM_FZX_GET_FZX_STATE  0x0f82
#define IOCTL_OTERM_FZX_SET_FZX_STATE  0x0f02

#define IOCTL_ICHAR_CRLF  0xc103
   
#define IOCTL_OCHAR_CRLF  0xc014














#define IOCTL_ITERM_GET_DELAY  0x1081
#define IOCTL_ITERM_SET_DELAY  0x1001

#define IOCTL_ITERM_LASTK      0x1101

#define IOCTL_OTERM_FCOLOR     0x1002
#define IOCTL_OTERM_FMASK      0x1102
#define IOCTL_OTERM_BCOLOR     0x1202















#define __BIFROST2_ANIM_GROUP      4
#define __BIFROST2_STATIC_MIN      128
#define __BIFROST2_STATIC_OVERLAP  128
#define __BIFROST2_TILE_IMAGES     49000
#define __BIFROST2_TILE_ORDER      7
#define __BIFROST2_TILE_MAP        65281
#define __BIFROST2_TOTAL_ROWS      22
#define __BIFROST2_HOLE            64839
#define __BIFROST2_HOLE_SIZE       0












#define __BIFROSTH_ANIM_SPEED      4
#define __BIFROSTH_ANIM_GROUP      4
#define __BIFROSTH_STATIC_MIN      128
#define __BIFROSTH_STATIC_OVERLAP  128
#define __BIFROSTH_TILE_IMAGES     48500
#define __BIFROSTH_TILE_MAP        65281
#define __BIFROSTH_TILE_ORDER      7
#define __BIFROSTH_SHIFT_COLUMNS   0
#define __BIFROSTH_SPRITE_MODE     0












#define __BIFROSTL_ANIM_SPEED      4
#define __BIFROSTL_ANIM_GROUP      4
#define __BIFROSTL_STATIC_MIN      128
#define __BIFROSTL_STATIC_OVERLAP  128
#define __BIFROSTL_TILE_IMAGES     48500
#define __BIFROSTL_TILE_MAP        65281
#define __BIFROSTL_TILE_ORDER      7












#define __ESXDOS_BASE_HOOK  128
#define __ESXDOS_BASE_MISC  136
#define __ESXDOS_BASE_FSYS  152

#define __ESXDOS_SYSCALL  0x08
#define __ESXDOS_ROMCALL  0x18
#define __ESXDOS_AUXCALL  0x30

#define __ESXDOS_SYS_DISK_STATUS  128
#define __ESXDOS_SYS_DISK_READ  129
#define __ESXDOS_SYS_DISK_WRITE  130
#define __ESXDOS_SYS_DISK_IOCTL  131
#define __ESXDOS_SYS_DISK_INFO  132

#define __ESXDOS_SYS_M_DOSVERSION  136
#define __ESXDOS_SYS_M_GETSETDRV  137
#define __ESXDOS_SYS_M_DRIVEINFO  138
#define __ESXDOS_SYS_M_TAPEIN  139
#define __ESXDOS_SYS_M_TAPEOUT  140
#define __ESXDOS_SYS_M_GETHANDLE  141
#define __ESXDOS_SYS_M_GETDATE  142

#define __ESXDOS_SYS_F_MOUNT  152
#define __ESXDOS_SYS_F_UMOUNT  153
#define __ESXDOS_SYS_F_OPEN  154
#define __ESXDOS_SYS_F_CLOSE  155
#define __ESXDOS_SYS_F_SYNC  156
#define __ESXDOS_SYS_F_READ  157
#define __ESXDOS_SYS_F_WRITE  158
#define __ESXDOS_SYS_F_SEEK  159
#define __ESXDOS_SYS_F_FGETPOS  160
#define __ESXDOS_SYS_F_FSTAT  161
#define __ESXDOS_SYS_F_FTRUNCATE  162
#define __ESXDOS_SYS_F_OPENDIR  163
#define __ESXDOS_SYS_F_READDIR  164
#define __ESXDOS_SYS_F_TELLDIR  165
#define __ESXDOS_SYS_F_SEEKDIR  166
#define __ESXDOS_SYS_F_REWINDDIR  167
#define __ESXDOS_SYS_F_GETCWD  168
#define __ESXDOS_SYS_F_CHDIR  169
#define __ESXDOS_SYS_F_MKDIR  170
#define __ESXDOS_SYS_F_RMDIR  171
#define __ESXDOS_SYS_F_STAT  172
#define __ESXDOS_SYS_F_UNLINK  173
#define __ESXDOS_SYS_F_TRUNCATE  174
#define __ESXDOS_SYS_F_CHMOD  175
#define __ESXDOS_SYS_F_RENAME  176
#define __ESXDOS_SYS_F_GETFREE  177

#define __ESXDOS_PATH_MAX  128
#define __ESXDOS_NAME_MAX  12

#define __ESXDOS_MODE_READ  0x01
#define __ESXDOS_MODE_WRITE  0x02
#define __ESXDOS_MODE_OPEN_EXIST  0x00
#define __ESXDOS_MODE_OPEN_CREAT  0x08
#define __ESXDOS_MODE_CREAT_NOEXIST  0x04
#define __ESXDOS_MODE_CREAT_TRUNC  0x0c
#define __ESXDOS_MODE_USE_HEADER  0x40

#define __ESXDOS_ATTR_READ_ONLY  0x01
#define __ESXDOS_ATTR_HIDDEN  0x02
#define __ESXDOS_ATTR_SYSTEM  0x04
#define __ESXDOS_ATTR_VOLUME_LABEL  0x08
#define __ESXDOS_ATTR_DIRECTORY  0x10
#define __ESXDOS_ATTR_ARCHIVE  0x20

#define __ESXDOS_DRIVE_CURRENT  0x2a
#define __ESXDOS_DRIVE_SYSTEM  0x24

#define __ESXDOS_SEEK_SET  0
#define __ESXDOS_SEEK_FWD  1
#define __ESXDOS_SEEK_BWD  2

#define __ESXDOS_OK  0
#define __ESXDOS_EOK  1
#define __ESXDOS_ENONSENSE  2
#define __ESXDOS_ESTEND  3
#define __ESXDOS_EWRTYPE  4
#define __ESXDOS_ENOENT  5
#define __ESXDOS_EIO  6
#define __ESXDOS_EINVAL  7
#define __ESXDOS_EACCES  8
#define __ESXDOS_ENOSPC  9
#define __ESXDOS_ENXIO  10
#define __ESXDOS_ENODRV  11
#define __ESXDOS_ENFILE  12
#define __ESXDOS_EBADF  13
#define __ESXDOS_ENODEV  14
#define __ESXDOS_EOVERFLOW  15
#define __ESXDOS_EISDIR  16
#define __ESXDOS_ENOTDIR  17
#define __ESXDOS_EEXIST  18
#define __ESXDOS_EPATH  19
#define __ESXDOS_ENOSYS  20
#define __ESXDOS_ENAMETOOLONG  21
#define __ESXDOS_ENOCMD  22
#define __ESXDOS_EINUSE  23
#define __ESXDOS_ERDONLY  24
#define __ESXDOS_EVERIFY  25
#define __ESXDOS_ELOADINGKO  26
#define __ESXDOS_EDIRINUSE  27
#define __ESXDOS_EMAPRAMACTIVE  28
#define __ESXDOS_EDRIVEBUSY  29
#define __ESXDOS_EFSUNKNOWN  30
#define __ESXDOS_EDEVICEBUSY  31
#define __ESXDOS_EMAXCODE  31












#define __NIRVANAM_OPTIONS  0

#define __NIRVANAM_OPTIONS_WIDE_DRAW     0x01
#define __NIRVANAM_OPTIONS_WIDE_SPRITES  0x02

#define __NIRVANAM_TOTAL_ROWS   22
#define __NIRVANAM_HOLE         64994
#define __NIRVANAM_HOLE_SIZE    0

#define __NIRVANAM_TILE_IMAGES  48000
#define __NIRVANAM_WIDE_IMAGES  54000
#define __NIRVANAM_CHAR_TABLE   15360












#define __NIRVANAP_OPTIONS  0

#define __NIRVANAP_OPTIONS_WIDE_DRAW     0x01
#define __NIRVANAP_OPTIONS_WIDE_SPRITES  0x02

#define __NIRVANAP_TOTAL_ROWS   23
#define __NIRVANAP_HOLE         64262
#define __NIRVANAP_HOLE_SIZE    0

#define __NIRVANAP_TILE_IMAGES  48000
#define __NIRVANAP_WIDE_IMAGES  54000
#define __NIRVANAP_CHAR_TABLE   15360












#define __SOUND_BIT_METHOD      1
#define __SOUND_BIT_PORT        0xfe
#define __SOUND_BIT_TOGGLE      0x10
#define __SOUND_BIT_TOGGLE_POS  4
#define __SOUND_BIT_READ_MASK   0x17
#define __SOUND_BIT_WRITE_MASK  0xe8












#define SP1V_DISPORIGX    0
#define SP1V_DISPORIGY    0
#define SP1V_DISPWIDTH    32
#define SP1V_DISPHEIGHT   24

#define SP1V_PIXELBUFFER  0xd1f7
#define SP1V_ATTRBUFFER   0xd1ff

#define SP1V_TILEARRAY    0xf000
#define SP1V_UPDATEARRAY  0xd200
#define SP1V_ROTTBL       0xf000

#define SP1V_UPDATELISTH  0xd1ed
#define SP1V_UPDATELISTT  0xd1ef











#define __LAYER2_COLOR_MONO_BLACK  0x00
#define __LAYER2_COLOR_MONO_GREY_0  0x00
#define __LAYER2_COLOR_MONO_GREY_1  0x49
#define __LAYER2_COLOR_MONO_GREY_2  0x92
#define __LAYER2_COLOR_MONO_GREY_3  0xff
#define __LAYER2_COLOR_MONO_WHITE  0xff

#define __LAYER2_COLOR_AMBER_0  0x00
#define __LAYER2_COLOR_AMBER_1  0x20
#define __LAYER2_COLOR_AMBER_2  0x44
#define __LAYER2_COLOR_AMBER_3  0x64
#define __LAYER2_COLOR_AMBER_4  0x88
#define __LAYER2_COLOR_AMBER_5  0xa8
#define __LAYER2_COLOR_AMBER_6  0xcc
#define __LAYER2_COLOR_AMBER_7  0xec

#define __LAYER2_COLOR_GREEN_0  0x00
#define __LAYER2_COLOR_GREEN_1  0x04
#define __LAYER2_COLOR_GREEN_2  0x08
#define __LAYER2_COLOR_GREEN_3  0x0c
#define __LAYER2_COLOR_GREEN_4  0x10
#define __LAYER2_COLOR_GREEN_5  0x14
#define __LAYER2_COLOR_GREEN_6  0x18
#define __LAYER2_COLOR_GREEN_7  0x1c

#define __LAYER2_COLOR_RB_RED  0xe0
#define __LAYER2_COLOR_RB_ORANGE  0xec
#define __LAYER2_COLOR_RB_YELLOW  0xfc
#define __LAYER2_COLOR_RB_GREEN  0x1c
#define __LAYER2_COLOR_RB_BLUE  0x03
#define __LAYER2_COLOR_RB_VIOLET  0x42
#define __LAYER2_COLOR_RB_INDIGO  0x83

#define __LAYER2_COLOR_ZX_BLACK  0x00
#define __LAYER2_COLOR_ZX_BLUE  0x02
#define __LAYER2_COLOR_ZX_RED  0xc0
#define __LAYER2_COLOR_ZX_MAGENTA  0xc3
#define __LAYER2_COLOR_ZX_GREEN  0x18
#define __LAYER2_COLOR_ZX_CYAN  0x1b
#define __LAYER2_COLOR_ZX_YELLOW  0xd8
#define __LAYER2_COLOR_ZX_WHITE  0xdb
#define __LAYER2_COLOR_ZX_BRIGHT_BLACK  0x00
#define __LAYER2_COLOR_ZX_BRIGHT_BLUE  0x03
#define __LAYER2_COLOR_ZX_BRIGHT_RED  0xe0
#define __LAYER2_COLOR_ZX_BRIGHT_MAGENTA  0xe3
#define __LAYER2_COLOR_ZX_BRIGHT_GREEN  0x1c
#define __LAYER2_COLOR_ZX_BRIGHT_CYAN  0x1f
#define __LAYER2_COLOR_ZX_BRIGHT_YELLOW  0xfc
#define __LAYER2_COLOR_ZX_BRIGHT_WHITE  0xff

#define __LAYER2_COLOR_ZXNR_NAVY  0x01
#define __LAYER2_COLOR_ZXNR_MAROON  0x40
#define __LAYER2_COLOR_ZXNR_INDIGO  0x41
#define __LAYER2_COLOR_ZXNR_RACING_GREEN  0x08
#define __LAYER2_COLOR_ZXNR_SHERPA_BLUE  0x09
#define __LAYER2_COLOR_ZXNR_OLIVE  0x48
#define __LAYER2_COLOR_ZXNR_BLACK  0x00
#define __LAYER2_COLOR_ZXNR_MIDNIGHT_BLUE  0x02
#define __LAYER2_COLOR_ZXNR_DARK_RED  0x80
#define __LAYER2_COLOR_ZXNR_DARK_VIOLET  0x82
#define __LAYER2_COLOR_ZXNR_ISLAMIC_GREEN  0x10
#define __LAYER2_COLOR_ZXNR_BONDI_BLUE  0x12
#define __LAYER2_COLOR_ZXNR_BRIGHT_OLIVE  0x90
#define __LAYER2_COLOR_ZXNR_GUNPOWDER_GRAY  0x49
#define __LAYER2_COLOR_ZXNR_BLUE  0x03
#define __LAYER2_COLOR_ZXNR_RED  0xe0
#define __LAYER2_COLOR_ZXNR_MAGENTA  0xe7
#define __LAYER2_COLOR_ZXNR_GREEN  0x1c
#define __LAYER2_COLOR_ZXNR_AQUA  0x1f
#define __LAYER2_COLOR_ZXNR_YELLOW  0xfc
#define __LAYER2_COLOR_ZXNR_MIST_GRAY  0xb6
#define __LAYER2_COLOR_ZXNR_SLATE_BLUE  0x6f
#define __LAYER2_COLOR_ZXNR_BITTERSWEET  0xed
#define __LAYER2_COLOR_ZXNR_ULTRA_PINK  0xef
#define __LAYER2_COLOR_ZXNR_SCREAMING_GREEN  0x7d
#define __LAYER2_COLOR_ZXNR_ELECTRIC_BLUE  0x9f
#define __LAYER2_COLOR_ZXNR_LASER_LEMON  0xfd
#define __LAYER2_COLOR_ZXNR_WHITE  0xff
#define __LAYER2_COLOR_ZXNR_LAVENDER_BLUE  0xb7
#define __LAYER2_COLOR_ZXNR_MELON  0xf6
#define __LAYER2_COLOR_ZXNR_LAVENDER_ROSE  0xf7
#define __LAYER2_COLOR_ZXNR_MINT_GREEN  0xbe
#define __LAYER2_COLOR_ZXNR_COLUMBIA_BLUE  0xbf
#define __LAYER2_COLOR_ZXNR_CANARY  0xfe

#define __LAYER2_COLOR_C64_BLACK  0x00
#define __LAYER2_COLOR_C64_WHITE  0xff
#define __LAYER2_COLOR_C64_RED  0x84
#define __LAYER2_COLOR_C64_CYAN  0x77
#define __LAYER2_COLOR_C64_VIOLET  0x8a
#define __LAYER2_COLOR_C64_GREEN  0x75
#define __LAYER2_COLOR_C64_BLUE  0x26
#define __LAYER2_COLOR_C64_YELLOW  0xd9
#define __LAYER2_COLOR_C64_ORANGE  0x88
#define __LAYER2_COLOR_C64_BROWN  0x48
#define __LAYER2_COLOR_C64_LIGHTRED  0xad
#define __LAYER2_COLOR_C64_GREY1  0x49
#define __LAYER2_COLOR_C64_GREY2  0x92
#define __LAYER2_COLOR_C64_LIGHTGREEN  0xbe
#define __LAYER2_COLOR_C64_LIGHTBLUE  0x6f
#define __LAYER2_COLOR_C64_GREY3  0xb6

#define __LAYER2_COLOR_G1_BLACK  0x00
#define __LAYER2_COLOR_G1_GREY  0x6d
#define __LAYER2_COLOR_G1_SILVER  0xb6
#define __LAYER2_COLOR_G1_DARK_TEAL  0x0e
#define __LAYER2_COLOR_G1_GREEN  0x14
#define __LAYER2_COLOR_G1_GREENYELLOW  0x9c
#define __LAYER2_COLOR_G1_MAROON  0x60
#define __LAYER2_COLOR_G1_SIENNA  0xa8
#define __LAYER2_COLOR_G1_SANDYBROWN  0xf0
#define __LAYER2_COLOR_G1_KHAKI  0xfd
#define __LAYER2_COLOR_G1_WHITE  0xff
#define __LAYER2_COLOR_G1_SKYBLUE  0x9b
#define __LAYER2_COLOR_G1_SLATEBLUE  0x4f
#define __LAYER2_COLOR_G1_BLUE  0x02

#define __LAYER2_COLOR_STD_DARK_BLUE  0x02
#define __LAYER2_COLOR_STD_BRIGHT_BLUE  0xdb
#define __LAYER2_COLOR_STD_BLUE  0x03
#define __LAYER2_COLOR_STD_CYAN  0x1f
#define __LAYER2_COLOR_STD_BRIGHT_YELLOW  0xf9
#define __LAYER2_COLOR_STD_YELLOW  0xfc
#define __LAYER2_COLOR_STD_ORANGE  0xf1
#define __LAYER2_COLOR_STD_BRIGHT_RED  0xe9
#define __LAYER2_COLOR_STD_RED  0xe0
#define __LAYER2_COLOR_STD_DARK_RED  0x80
#define __LAYER2_COLOR_STD_MAGENTA  0xe3
#define __LAYER2_COLOR_STD_BRIGHT_GREEN  0x9e
#define __LAYER2_COLOR_STD_GREEN  0x1c
#define __LAYER2_COLOR_STD_DARK_GREEN  0x10
#define __LAYER2_COLOR_STD_BRIGHT_GREY  0x49
#define __LAYER2_COLOR_STD_LIGHT_GREY  0x6d
#define __LAYER2_COLOR_STD_GREY  0x24
#define __LAYER2_COLOR_STD_WHITE  0xff
#define __LAYER2_COLOR_STD_BLACK  0x00

#define __LAYER2_COLOR_HTML_Black  0x00
#define __LAYER2_COLOR_HTML_Navy  0x02
#define __LAYER2_COLOR_HTML_DarkBlue  0x02
#define __LAYER2_COLOR_HTML_MediumBlue  0x03
#define __LAYER2_COLOR_HTML_Blue  0x03
#define __LAYER2_COLOR_HTML_DarkGreen  0x0c
#define __LAYER2_COLOR_HTML_Green  0x10
#define __LAYER2_COLOR_HTML_Teal  0x12
#define __LAYER2_COLOR_HTML_DarkCyan  0x12
#define __LAYER2_COLOR_HTML_DeepSkyBlue  0x17
#define __LAYER2_COLOR_HTML_DarkTurquoise  0x1b
#define __LAYER2_COLOR_HTML_MediumSpringGreen  0x1e
#define __LAYER2_COLOR_HTML_Lime  0x1c
#define __LAYER2_COLOR_HTML_SpringGreen  0x1d
#define __LAYER2_COLOR_HTML_Aqua  0x1f
#define __LAYER2_COLOR_HTML_Cyan  0x1f
#define __LAYER2_COLOR_HTML_MidnightBlue  0x01
#define __LAYER2_COLOR_HTML_DodgerBlue  0x13
#define __LAYER2_COLOR_HTML_LightSeaGreen  0x36
#define __LAYER2_COLOR_HTML_ForestGreen  0x30
#define __LAYER2_COLOR_HTML_SeaGreen  0x31
#define __LAYER2_COLOR_HTML_DarkSlateGray  0x29
#define __LAYER2_COLOR_HTML_DarkSlateGrey  0x29
#define __LAYER2_COLOR_HTML_LimeGreen  0x38
#define __LAYER2_COLOR_HTML_MediumSeaGreen  0x35
#define __LAYER2_COLOR_HTML_Turquoise  0x5f
#define __LAYER2_COLOR_HTML_RoyalBlue  0x4f
#define __LAYER2_COLOR_HTML_SteelBlue  0x52
#define __LAYER2_COLOR_HTML_DarkSlateBlue  0x46
#define __LAYER2_COLOR_HTML_MediumTurquoise  0x5b
#define __LAYER2_COLOR_HTML_Indigo  0x42
#define __LAYER2_COLOR_HTML_DarkOliveGreen  0x4c
#define __LAYER2_COLOR_HTML_CadetBlue  0x52
#define __LAYER2_COLOR_HTML_CornflowerBlue  0x73
#define __LAYER2_COLOR_HTML_RebeccaPurple  0x66
#define __LAYER2_COLOR_HTML_MediumAquaMarine  0x7a
#define __LAYER2_COLOR_HTML_DimGray  0x6d
#define __LAYER2_COLOR_HTML_DimGrey  0x6d
#define __LAYER2_COLOR_HTML_SlateBlue  0x6b
#define __LAYER2_COLOR_HTML_OliveDrab  0x70
#define __LAYER2_COLOR_HTML_SlateGray  0x72
#define __LAYER2_COLOR_HTML_SlateGrey  0x72
#define __LAYER2_COLOR_HTML_LightSlateGray  0x72
#define __LAYER2_COLOR_HTML_LightSlateGrey  0x72
#define __LAYER2_COLOR_HTML_MediumSlateBlue  0x6f
#define __LAYER2_COLOR_HTML_LawnGreen  0x7c
#define __LAYER2_COLOR_HTML_Chartreuse  0x7c
#define __LAYER2_COLOR_HTML_Aquamarine  0x7f
#define __LAYER2_COLOR_HTML_Maroon  0x80
#define __LAYER2_COLOR_HTML_Purple  0x82
#define __LAYER2_COLOR_HTML_Olive  0x90
#define __LAYER2_COLOR_HTML_Gray  0x92
#define __LAYER2_COLOR_HTML_Grey  0x92
#define __LAYER2_COLOR_HTML_SkyBlue  0x9b
#define __LAYER2_COLOR_HTML_LightSkyBlue  0x9b
#define __LAYER2_COLOR_HTML_BlueViolet  0x87
#define __LAYER2_COLOR_HTML_DarkRed  0x80
#define __LAYER2_COLOR_HTML_DarkMagenta  0x82
#define __LAYER2_COLOR_HTML_SaddleBrown  0x88
#define __LAYER2_COLOR_HTML_DarkSeaGreen  0x96
#define __LAYER2_COLOR_HTML_LightGreen  0x9e
#define __LAYER2_COLOR_HTML_MediumPurple  0x8f
#define __LAYER2_COLOR_HTML_DarkViolet  0x83
#define __LAYER2_COLOR_HTML_PaleGreen  0x9e
#define __LAYER2_COLOR_HTML_DarkOrchid  0x87
#define __LAYER2_COLOR_HTML_YellowGreen  0x98
#define __LAYER2_COLOR_HTML_Sienna  0xa8
#define __LAYER2_COLOR_HTML_Brown  0xa4
#define __LAYER2_COLOR_HTML_DarkGray  0xb6
#define __LAYER2_COLOR_HTML_DarkGrey  0xb6
#define __LAYER2_COLOR_HTML_LightBlue  0xbb
#define __LAYER2_COLOR_HTML_GreenYellow  0xbc
#define __LAYER2_COLOR_HTML_PaleTurquoise  0xbf
#define __LAYER2_COLOR_HTML_LightSteelBlue  0xbb
#define __LAYER2_COLOR_HTML_PowderBlue  0xbf
#define __LAYER2_COLOR_HTML_FireBrick  0xa4
#define __LAYER2_COLOR_HTML_DarkGoldenRod  0xb0
#define __LAYER2_COLOR_HTML_MediumOrchid  0xab
#define __LAYER2_COLOR_HTML_RosyBrown  0xb2
#define __LAYER2_COLOR_HTML_DarkKhaki  0xb5
#define __LAYER2_COLOR_HTML_Silver  0xdb
#define __LAYER2_COLOR_HTML_MediumVioletRed  0xc2
#define __LAYER2_COLOR_HTML_IndianRed  0xc9
#define __LAYER2_COLOR_HTML_Peru  0xd0
#define __LAYER2_COLOR_HTML_Chocolate  0xcc
#define __LAYER2_COLOR_HTML_Tan  0xd6
#define __LAYER2_COLOR_HTML_LightGray  0xdb
#define __LAYER2_COLOR_HTML_LightGrey  0xdb
#define __LAYER2_COLOR_HTML_Thistle  0xd7
#define __LAYER2_COLOR_HTML_Orchid  0xcf
#define __LAYER2_COLOR_HTML_GoldenRod  0xd4
#define __LAYER2_COLOR_HTML_PaleVioletRed  0xce
#define __LAYER2_COLOR_HTML_Crimson  0xc0
#define __LAYER2_COLOR_HTML_Gainsboro  0xdb
#define __LAYER2_COLOR_HTML_Plum  0xd7
#define __LAYER2_COLOR_HTML_BurlyWood  0xd6
#define __LAYER2_COLOR_HTML_LightCyan  0xff
#define __LAYER2_COLOR_HTML_Lavender  0xff
#define __LAYER2_COLOR_HTML_DarkSalmon  0xf1
#define __LAYER2_COLOR_HTML_Violet  0xf3
#define __LAYER2_COLOR_HTML_PaleGoldenRod  0xfe
#define __LAYER2_COLOR_HTML_LightCoral  0xf2
#define __LAYER2_COLOR_HTML_Khaki  0xfe
#define __LAYER2_COLOR_HTML_AliceBlue  0xff
#define __LAYER2_COLOR_HTML_HoneyDew  0xff
#define __LAYER2_COLOR_HTML_Azure  0xff
#define __LAYER2_COLOR_HTML_SandyBrown  0xf5
#define __LAYER2_COLOR_HTML_Wheat  0xfa
#define __LAYER2_COLOR_HTML_Beige  0xff
#define __LAYER2_COLOR_HTML_WhiteSmoke  0xff
#define __LAYER2_COLOR_HTML_MintCream  0xff
#define __LAYER2_COLOR_HTML_GhostWhite  0xff
#define __LAYER2_COLOR_HTML_Salmon  0xf1
#define __LAYER2_COLOR_HTML_AntiqueWhite  0xff
#define __LAYER2_COLOR_HTML_Linen  0xff
#define __LAYER2_COLOR_HTML_LightGoldenRodYellow  0xff
#define __LAYER2_COLOR_HTML_OldLace  0xff
#define __LAYER2_COLOR_HTML_Red  0xe0
#define __LAYER2_COLOR_HTML_Fuchsia  0xe3
#define __LAYER2_COLOR_HTML_Magenta  0xe3
#define __LAYER2_COLOR_HTML_DeepPink  0xe2
#define __LAYER2_COLOR_HTML_OrangeRed  0xe8
#define __LAYER2_COLOR_HTML_Tomato  0xed
#define __LAYER2_COLOR_HTML_HotPink  0xee
#define __LAYER2_COLOR_HTML_Coral  0xed
#define __LAYER2_COLOR_HTML_DarkOrange  0xf0
#define __LAYER2_COLOR_HTML_LightSalmon  0xf5
#define __LAYER2_COLOR_HTML_Orange  0xf4
#define __LAYER2_COLOR_HTML_LightPink  0xf7
#define __LAYER2_COLOR_HTML_Pink  0xfb
#define __LAYER2_COLOR_HTML_Gold  0xf8
#define __LAYER2_COLOR_HTML_PeachPuff  0xfa
#define __LAYER2_COLOR_HTML_NavajoWhite  0xfa
#define __LAYER2_COLOR_HTML_Moccasin  0xfe
#define __LAYER2_COLOR_HTML_Bisque  0xff
#define __LAYER2_COLOR_HTML_MistyRose  0xff
#define __LAYER2_COLOR_HTML_BlanchedAlmond  0xff
#define __LAYER2_COLOR_HTML_PapayaWhip  0xff
#define __LAYER2_COLOR_HTML_LavenderBlush  0xff
#define __LAYER2_COLOR_HTML_SeaShell  0xff
#define __LAYER2_COLOR_HTML_Cornsilk  0xff
#define __LAYER2_COLOR_HTML_LemonChiffon  0xff
#define __LAYER2_COLOR_HTML_FloralWhite  0xff
#define __LAYER2_COLOR_HTML_Snow  0xff
#define __LAYER2_COLOR_HTML_Yellow  0xfc
#define __LAYER2_COLOR_HTML_LightYellow  0xff
#define __LAYER2_COLOR_HTML_Ivory  0xff
#define __LAYER2_COLOR_HTML_White  0xff





#endif



