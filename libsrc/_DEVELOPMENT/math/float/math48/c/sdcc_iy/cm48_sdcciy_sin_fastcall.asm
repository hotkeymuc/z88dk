
; float sin(float x) __z88dk_fastcall

SECTION code_fp_math48

PUBLIC cm48_sdcciy_sin_fastcall

EXTERN cm48_sdcciyp_dx2m48, am48_sin, cm48_sdcciyp_m482d

cm48_sdcciy_sin_fastcall:

   call cm48_sdcciyp_dx2m48
   
   call am48_sin
   
   jp cm48_sdcciyp_m482d