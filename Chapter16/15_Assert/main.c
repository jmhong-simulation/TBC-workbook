#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//#include <limits.h>
//_Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int divide(int a, int b);

int main()
{




	return 0;
}

int divide(int a, int b)
{
	assert(b != 0);

	// if (b == 0) {
	//    printf("Cannot divide\n");
	//	  exit(1);
	//}

	return a / b;
}