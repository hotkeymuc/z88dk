
; size_t wv_priority_queue_capacity_fastcall(wv_priority_queue_t *q)

SECTION code_adt_wv_priority_queue

PUBLIC _wv_priority_queue_capacity_fastcall

defc _wv_priority_queue_capacity_fastcall = asm_wv_priority_queue_capacity

INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_capacity.asm"