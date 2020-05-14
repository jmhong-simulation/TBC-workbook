#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_power(int base, int n);

int main()
{
	int base = 2;
	int n = 5;
	int pow = 1;

	while (scanf("%d %d", &base, &n) == 2)
	{
		pow = compute_power(base, n);

		printf("%d pow %d = %d\n", base, n, pow);
	}

	return 0;
}

int compute_power(int base, int n)
{
	int pow = 1;

	for (int i = 0; i < n; ++i)
		pow *= base;

	return pow;
}
