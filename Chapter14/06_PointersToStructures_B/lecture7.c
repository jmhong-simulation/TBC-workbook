#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct my_data
{
	int a;
	char c;
	float* arr;
};

int main()
{
	struct my_data d1 = { 1234, 'A', NULL };

	struct my_data d2 = d1;

	printf("%d %c %lld\n", d2.a, d2.c, d2.arr);

	return 0;
}