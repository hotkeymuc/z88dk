//-----------------------------------------------------------------------------
// Z88DK Z80 Module Assembler
//
// Copyright (c) Paulo Custodio, 2011-2017
// License: http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------
#include "main.h"

#include <stdio.h>
#include <stdlib.h>

extern int main_ori( int argc, char *argv[] );

// Check glib version, print error and return false if incorrect
static bool check_glib_version()
{
	const_cstring err = glib_check_version(
		GLIB_MAJOR_VERSION,
		GLIB_MINOR_VERSION,
		GLIB_MICRO_VERSION);
	if (err) {
		fprintf(stderr, "%s", err);
		return false;
	}
	else {
		return true;
	}
}

int z80asm(int argc, cstring argv[])
{
	// check GLib
	if (!check_glib_version())
		return EXIT_FAILURE;

	// jump to original main
	return main_ori(argc, argv);
}
