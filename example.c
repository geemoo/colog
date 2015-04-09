#include <stdio.h>

#include "colog.h"

int main(void)
{

	// standard usage.. just like printf
	colog(CF_NORMAL, C_LIGHTRED, "error: something something: %d\n", -1);

	// normal is like 0.. and why type you don't need to
	colog(0, C_LIGHTYELLOW, "warning: something something: %d\n", -2);

	// font modifiers are neat too
	colog(CF_INVERSE, C_DARKYELLOW, "--- MARK ---\n");

	return 0;
}
