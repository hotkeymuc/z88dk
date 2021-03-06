
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; crt target defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

IF __CRTCFG = -1

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; user supplied crt defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   INCLUDE "crt_cfg.inc"

ENDIF

IF __CRTCFG = 0

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; zx next ram model ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   defc TAR__crt_org_code              = 32768
   defc TAR__crt_org_data              = 0
   defc TAR__crt_org_bss               = 0

   defc TAR__crt_model                 = 0
   
   defc TAR__register_sp               = 65368    ;; under UDGs
   defc TAR__crt_stack_size            = 512
   
   defc TAR__crt_initialize_bss        = 0
   
   defc TAR__crt_include_preamble      = 0

   defc TAR__crt_org_vector_table      = 0
   defc TAR__crt_interrupt_mode        = -1
   
   defc TAR__crt_enable_commandline    = 0
   defc TAR__crt_enable_restart        = 0
   defc TAR__crt_enable_close          = 1
   
   defc TAR__crt_enable_eidi           = 0x01     ;; disable interrupts at start
   defc TAR__crt_on_exit               = 0x30002  ;; return to basic
   
   defc TAR__crt_enable_rst            = 0
   defc TAR__crt_enable_nmi            = 0
   
   ; clib defaults
   
   defc TAR__clib_exit_stack_size      = 0
   defc TAR__clib_quickexit_stack_size = 0
   
   defc TAR__clib_malloc_heap_size     = -1
   defc TAR__clib_stdio_heap_size      = 256
   
   defc TAR__clib_balloc_table_size    = 0
   
   defc TAR__clib_fopen_max            = 0
   defc TAR__clib_open_max             = 0

ENDIF

IF __CRTCFG = 2

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; esxdos dot command ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   defc TAR__crt_org_code              = 0x2000
   defc TAR__crt_org_data              = 0
   defc TAR__crt_org_bss               = 0

   defc TAR__crt_model                 = 0
   
   defc TAR__register_sp               = -1
   defc TAR__crt_stack_size            = 512
   
   defc TAR__crt_initialize_bss        = 0
   
   defc TAR__crt_include_preamble      = 0

   defc TAR__crt_org_vector_table      = 0
   defc TAR__crt_interrupt_mode        = -1
   
   defc TAR__crt_enable_commandline    = 3
   defc TAR__crt_enable_restart        = 0
   defc TAR__crt_enable_close          = 1
   
   defc TAR__crt_enable_eidi           = 0        ;; no changes to interrupts
   defc TAR__crt_on_exit               = 0x30002  ;; return to basic
   
   defc TAR__crt_enable_rst            = 0
   defc TAR__crt_enable_nmi            = 0
   
   ; clib defaults
   
   defc TAR__clib_exit_stack_size      = 0
   defc TAR__clib_quickexit_stack_size = 0
   
   defc TAR__clib_malloc_heap_size     = 0
   defc TAR__clib_stdio_heap_size      = 0
   
   defc TAR__clib_balloc_table_size    = 0
   
   defc TAR__clib_fopen_max            = 0
   defc TAR__clib_open_max             = 0

ENDIF

;; end crt target defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
