#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		Flexible array member (struct hack in GCC)
	*/

	struct flex
	{
		size_t count;
		double average;
		//double values[];	// flexible array member (last member!)
	};





	return 0;
}