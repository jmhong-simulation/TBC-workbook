#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Function call has overhead
	- set up the call, pass arguments, jump to the function code, and return.

	inline function specifier
	- Suggests inline replacements.

	Inline functions should be short.
	A function with internal linkage can be made inline. (GCC, clang)
	You can't take its address.
*/

inline int foo()
{
	return 5;
}

// Driver code 
int main()
{




	return 0;
}
