
; float fabs(float x) __z88dk_fastcall

SECTION code_fp_math48

PUBLIC cm48_sdcciy_fabs_fastcall

EXTERN cm48_sdcciyp_dx2m48, am48_fabs, cm48_sdcciyp_m482d

cm48_sdcciy_fabs_fastcall:

   call cm48_sdcciyp_dx2m48
   
   call am48_fabs
   
   jp cm48_sdcciyp_m482d