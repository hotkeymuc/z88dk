
; ===============================================================
; Sep 2014
; ===============================================================
; 
; void *p_list_next(void *item)
;
; Return next item in list.
;
; ===============================================================

SECTION code_clib
SECTION code_adt_p_list

PUBLIC asm_p_list_next

EXTERN asm_p_forward_list_next

defc asm_p_list_next = asm_p_forward_list_next

   ; enter : hl = void *item
   ;
   ; exit  : success
   ;
   ;           hl = void *item_next
   ;           nz flag set
   ;
   ;         fail if no next item
   ;
   ;           hl = 0
   ;           z flag set
   ;
   ; uses  : af, hl
