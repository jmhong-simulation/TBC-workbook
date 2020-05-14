#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>	// SetConsoleOutputCP()

int main()
{
	FILE* fp = fopen("test.txt", "rb");






	fclose(fp);

	return 0;
}