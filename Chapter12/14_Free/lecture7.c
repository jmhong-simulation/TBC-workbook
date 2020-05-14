#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr_backup;

	{
		int n = 10000;
		int* ptr = (int*)malloc(n*sizeof(int));

		for (int i = 0; i < n; ++i)
			ptr[i] = i + 1;

		ptr_backup = ptr;
	}

	// what happens ?
	printf("%d %d\n", ptr_backup[0], ptr_backup[1]);


	return 0;
}