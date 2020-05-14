#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy(), memmove()

#define LEN  6

void prt(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	/*
	- overlapping region
	- pointer-to-void (datatype is unknown)
	*/




	/*
	{ 1, 3, 5, 7, 9, 11 }
	{ 5, 7, 9, 11, 9, 11}
	*/
 


	return 0;
}