#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Static variable with internal linkage
	- File scope, external linkage, static storage duration
	- Internal storage class
*/




void fun();
void fun_second();
void fun_third();

int main()
{
	fun();
	fun_second();
	fun_third();

	return 0;
}

void fun()
{


}