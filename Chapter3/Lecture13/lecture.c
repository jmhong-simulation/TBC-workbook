#include <stdio.h>
#include <stdbool.h>

int main()
{
	//printf("%u\n", sizeof(_Bool)); // 1 byte
	printf("%zu\n", sizeof(_Bool));  // 1 byte, use %zu for size_t type


	return 0;
}