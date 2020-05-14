#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdarg.h>// Variable Arguments

/*
Variable Arguments
- int printf(char const* const _Format, ...);

1. Provide a function prototype using an ellipsis

void   vaf1(int n, ...); // OK
int    vaf2(const char * s, int k, ...); // OK
char   vaf3(char c1, ..., char c2); // Not OK, ellipsis should be the last.
double vaf4(...); // Not OK, no parameter.

2. Create a va_list type variable in the function definition
3. Use a macro to initialize the variable to an argument list.
4. Use a macro to access the argument list.
*/

//double average(int, ...);
//double average2(char* format_string, ...);

int main()
{




	return 0;
}

//double average(int num, ...)
//{
//
//}
//
//double average2(char* format_string, ...)
//{
//
//}