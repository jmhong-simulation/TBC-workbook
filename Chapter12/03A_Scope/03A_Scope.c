#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Variable scopes (visibility)
	- block, function, function prototype, file.
*/




double func_block(double d)
{
	double p = 0.0;



	return p;
}

int main()
{
	func_block(1.0);
}

void f1(int hello, double world)
{
}

//void vla_param(int n, int m, double ar[n][m])
//{
//
//}