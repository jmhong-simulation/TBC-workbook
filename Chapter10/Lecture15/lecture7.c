#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* Pointer Compatibility */
	int n = 5;
	double x;
	int* p1 = &n;
	double* pd = &x;
	x = n;
	//pd = p1;	// Warning

	int* pt;
	int(*pa)[3];
	int ar1[2][3];
	//int ar2[3][2];
	int** p2;		// a pointer to a pointer

	pt = &ar1[0][0];	// pointer-to-int
	pt = ar1[0];		// pointer-to-int;
	//pt = ar1;			// Warning (Error)
	pa = ar1;			// pointer-to-int[3]
	//pa = ar2;			// Warning or error
	p2 = &pt;			// pointer-to-int *
	//*p2 = ar2[0];		// pointer-to-int
	//p2 = ar2;			// Warning (Error)

	{int x = 20;
	const int y = 23;
	int* p1 = &x;
	const int* p2 = &y;
	const int** pp2;
	//p1 = p2;
	p2 = p1;
	pp2 = &p1;
	p2 = p1; }

	{const int** pp2;
	int* p1;
	const int n = 13;
	pp2 = &p1;
	*pp2 = &n;
	*p1 = 10; }

	/* C const and C++ const */
	{
		const int y;
		const int* p2 = &y;
		//int* p1;
		//p1 = p2;	// warning (error in cpp)
	}

	//int k = 5;
	//double va[k];
	//va[0] = 3.14;
	//va[1] = 1.0;

	//for (int i = 0; i < 5; ++i)
	//	printf("%f \n", va[i]);

	return 0;
}