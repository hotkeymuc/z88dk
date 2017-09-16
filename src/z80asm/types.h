//-----------------------------------------------------------------------------
// Z88DK Z80 Module Assembler
//
// Common types
//
// Copyright (c) Paulo Custodio, 2011-2017
// License: http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------
#pragma once

// glib types
#include <glib.h>

// bool, true, false
#include <stdbool.h>

// null-terminated strings
typedef char const * const_cstring;
typedef char * cstring;

// character pointers, not necessarily null-terminated
typedef char const * const_cptr;
typedef char * cptr;
