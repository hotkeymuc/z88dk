//-----------------------------------------------------------------------------
// Z88DK Z80 Module Assembler
//
// Copyright (c) Paulo Custodio, 2011-2017
// License: http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------
#pragma once

#include "types.h"

// main z80asm function
// argc and argv point at the arguments, past the source file name
extern int z80asm(int argc, cstring argv[]);
