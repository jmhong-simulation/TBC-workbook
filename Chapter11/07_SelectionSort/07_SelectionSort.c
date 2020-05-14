#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Selection Sort Algorithm
	https://www.geeksforgeeks.org/selection-sort/

	Youtube search "Selection Sort", "CS50"

	64 25 12 22 11	(min_idx = 0)
	   64			(min_idx = 0)
	   25			(min_idx = 1)
		  25        (min_idx = 1)
		  12        (min_idx = 2)
			 12     (min_idx = 2)
				12  (min_idx = 2)
				11  (min_idx = 4)
	11 25 12 22 64  (swap arr[0] and arr[4])

	11 25 12 22 64	(min_idx = 1)
		  25		(min_idx = 1)
		  12		(min_idx = 2)
			 12		(min_idx = 2)
				12	(min_idx = 2)
	11 12 25 22 64  (swap arr[1] and arr[2])

	11 12 25 22 64	(min_idx = 2)
	...

	11 12 22 25 64	(min_idx = 3)
	...
*/

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{



	return 0;
}

void printArray(int arr[], int size)
{

}

void swap(int* xp, int* yp)
{

}

void selectionSort(int arr[], int n)
{

}


