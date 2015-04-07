;       Generic Small C+ Floating point library
;       Converts integer in hl to fp number


                PUBLIC    ufloat

                EXTERN     float
                EXTERN    float1


;
;       convert the integer in hl to    (unsigned routine)
;       a floating point number in FA
;

.ufloat
        xor     a               ;signify no sign
        jp      float1
	defw	float
	