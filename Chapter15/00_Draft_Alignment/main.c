#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdalign.h> // c++ style alignas, alignof

int main()
{
#ifdef __clang_major__
	printf("clang detected version %d.%d\n", __clang_major__, __clang_minor__);
#endif

#ifdef __GNUC__
	// note that clang 3.7 declares itself as a gcc 4.2"
	printf("gcc detected version %d.%d\n", __GNUC__, __GNUC_MINOR__);
#endif







	return 0;
}