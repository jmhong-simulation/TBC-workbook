#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/** Motivation
int c = 0; // red:0, orange:1, yellow:2, green:3, ...
if (c == 0)
	printf("red");
else if(c == 1)
	printf("orange");
else if (c == 2)
	printf("yellow");	
... ...
*/

/**
#define RED		1
#define ORANGE	2
#define YELLOW  3

int c = YELLOW;
if (c == YELLOW)
	printf("yellow");
*/

int main()
{
	/*
		Enumerated type
		- Symbolic names to represent integer constants
		- Improve readability and make it easy to maintain
		- enum-specifier (struct-specifier, union-specifier)

		Enumerators
		- The symbolic constants
	*/



	return 0;
}