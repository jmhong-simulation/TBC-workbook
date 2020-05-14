#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>	// SetConsoleOutputCP()

int main()
{
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

	//int ch;
	//FILE* fr, * fw;

	const char* in_filename = "원본.txt";
	const char* out_filename = "사본.txt";



	//SetConsoleOutputCP(CP_UTF8);// UTF-8 mode

	


	//SetConsoleOutputCP(default_cp);// ISO 2022 Korean

	


	printf("한글 출력 확인");

	return 0;
}
