#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Variable scopes (visibility)
	- block, function, function prototype, file.
*/



void func1()
{

}

void func2()
{


	//local = 456;	// Error
}

int main()
{
	int local = 1234;




	return 0;
}
