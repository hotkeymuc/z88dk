
; float tan(float x) __z88dk_fastcall

SECTION code_fp_math48

PUBLIC cm48_sdccix_tan_fastcall

EXTERN cm48_sdccixp_dx2m48, am48_tan, cm48_sdccixp_m482d

cm48_sdccix_tan_fastcall:

   call cm48_sdccixp_dx2m48
   
   call am48_tan
   
   jp cm48_sdccixp_m482d