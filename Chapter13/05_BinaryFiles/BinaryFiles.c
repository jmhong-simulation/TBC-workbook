#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	fopen() mode string for binary IO
	- "rb", "wb", "ab"
	- "ab+", "a+b"
	- "wb+", "w+b"
	- "ab+", "a+b"

	C11 'x' mode fails if the file exists, instead of overwriting it.
	- "wx", "wbx", "w+x", "wb+x", "w+bx"
	*/

	// Writing example



	// Reading example, feof(), ferror()


	return 0;
}