#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	/*
		typedef
		- symbolic names to types
		- typedef interpretation is performed by the compiler, not the preprocessor
		- More flexible than #define
	*/

	typedef unsigned char BYTE;//Note the scope of BYTE

	BYTE x, y[10], * z;

	typedef unsigned char byte;

	size_t;
	time_t t = time();

	typedef char* STRING;

	STRING name, sign;

	/*
	#define STRING char *

	STRING name, sign;
	char * name, sign;
	*/

	typedef struct complex {
		float real;
		float imag;
	} COMPLEX;

	typedef struct { double width; double height; } rect;
	rect r1 = { 1.1, 2.2 };
	rect r2;

	struct { double width; double height; } r3 = { 3.3, 4.4 };
	struct { double width; double height; } r4;
	r4 = r3;
	printf("%f %f\n", r4.width, r4.height);

	return 0;
}