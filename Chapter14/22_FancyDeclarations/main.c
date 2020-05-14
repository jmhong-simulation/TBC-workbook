#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int temp(int a)
{
	return 0;
}

int (*g(int a))(int)
{
	return temp;
}

int main()
{
	/*
		*	indicates a pointer
		()	indicates a function
		[]	indicates an array
	*/

	/** Deciphering Complex Declarations (KNK 18.4)
		- Always read declarations from the inside out.
		- When there's a choice, always favor [] and () over *(asterisk).
	*/

	//int* ap[10];	 // Identifier ap is an array of pointers
	//
	//typedef int* pint;
	//pint ap2[10];

	//float* fp(float);// fp is a function that returns a pointer
	//
	//typedef float* pfloat;
	//pfloat fp2(float);

	//void (*pf)(int);
	/*
		void (*pf)(int);
		      1           1. pointer to
			        2     2. function with int argument
		 3                3. returning void
	*/

	//int* (*x[10])(void);
	/*
		int* (*x[10])(void);
		         1            1. array of
              2               2. pointers to
			            3     3. functions with no arguments
		 4                    4. returning pointer to int
	*/

	/* A function can't return an array */

	//int f(int)[]; // Wrong

	/* BUT it can return a pointer to an array */

	//int(*f(int))[];

	/* A function can't return a function */

	//int g(int)(int); // Wrong

	/* BUT it can return a pointer to a function */

	//int (*g(int))(int);

	/* An array of functions aren't possible */

	//int a[10](int); // Wrong
	
	/* BUT an array of function pointers are possible */
	
	//int (*x2[10])(int);

	/* Using typedef to simplify declarations */

	/*typedef int FCN(int);
	typedef FCN* FCN_PTR;
	typedef FCN_PTR FCN_PTR_ARRAY[10];
	FCN_PTR_ARRAY x3;*/

	/* More examples */

	//int board[6][4];// an array of arrays of int
	//int** ptr;
	//
	//int* risks[10];	// A 10-element array of pointers to int
	//int(*rusk)[10];	// A pointer to an array of 10 ints

	//int* off[3][4]; // A 4x3 array of pointers to int
	//int(*uff)[3][4];// a pointer to a 3 x 4 array of ints
	//int(*uof[3])[4];// a 3-element array of pointers to 4-element arrays of int

	//char* fump(int);// function returning pointer to char
	//char (*frump)(int);// pointer to a function that returns type char
	//char (*flump[3])(int);// array of 3 pointers to functions that return type char

	//typedef int arr5[5];
	//typedef arr5* p_arr5;
	//typedef p_arr5 arrp10[10];

	//arr5 togs;
	//p_arr5 p2;
	//arrp10 arp;

	return 0;
}