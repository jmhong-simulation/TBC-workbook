#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MENU 3

int main()
{
	puts("Enter a string\n");

	char input[100];
	scanf("%[^\n]%*c", input);

	return 0;
}