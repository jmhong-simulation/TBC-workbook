#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		One variable
	*/





	/*
		1D array
	*/





	/*
		2D array
	*/





	/*
		Using 1D arrays as 2D arrays

		row = 3, col = 2

		(r, c)

		2D
		(0, 0) (0, 1)
		(1, 0) (1, 1)
		(2, 0) (2, 1)

		1D
		(0, 0) (0, 1) (1, 0) (1, 1) (2, 0) (2, 1)
		0      1      2      3      4      5      = c + col * r
		
	*/




	
	/*
		Using 1D arrays as 3D arrays

		row = 3, col = 2, depth = 2

		(r, c, d)

		3D 
		-------------------
		(0, 0, 0) (0, 1, 0)
		(1, 0, 0) (1, 1, 0)
		(2, 0, 0) (2, 1, 0)
		-------------------
		(0, 0, 1) (0, 1, 1)
		(1, 0, 1) (1, 1, 1)
		(2, 0, 1) (2, 1, 1)
		-------------------

		1D
		(0, 0, 0) (0, 1, 0) (1, 0, 0) (1, 1, 0) (2, 0, 0) (2, 1, 0) (0, 0, 1) (0, 1, 1)	(1, 0, 1) (1, 1, 1) (2, 0, 1) (2, 1, 1)
		0         1         2         3         4         5         6         7         8         9         10        11
		= c + col * r + (col*row) * d
		= 1 + 2 * 1 + (3*2) * 1 = 1 + 2 + 6 = 9

		3D
		row, col, depth, height
		(r, c, d, h)
		index = c + col * r + (col*row) * d + (row * col * depth) * h
	*/

	



	return 0;
}