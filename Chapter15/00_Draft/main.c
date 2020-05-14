#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // for CHAR_BIT, #bits per char
char* itobs(int, char*);
void show_bstr(const char*);

int main()
{
	char bin_str[CHAR_BIT * sizeof(int) + 1];
	int number;

	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");

	while (scanf("%d", &number) == 1)
	{
		itobs(number, bin_str);
		printf("%d is ", number);
		show_bstr(bin_str);
		putchar('\n');
	}

	puts("Bye!");

	return 0;
}

char* itobs(int n, char* ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (01 & n) + '0'; // assume ASCII or similar (01 octal number), add '0' conversion
	ps[size] = '\0';

	return ps;
}

/* show binary string in blocks of 4 */
void show_bstr(const char* str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);

		if (++i % 4 == 0 && str[i])
			putchar(' ');
	}
}