#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void int_binary(const int num);

int main()
{
	/*
		Bitwise shift operators
		
		- Left shift
		number << n : multiply number by 2^n
		
		- Right shift 
		number >> n : divide by 2^n (for non-negative numbers)
	*/
	
	// 8 bit integer cases
	//							       76543210         76543210       76543210
	//printf("%hhd\n", 1 << 3);		// 00000001 ->   00000001???    -> 00001000
	//printf("%hhd\n", 8 >> 1);		// 00001000 ->      ?00001000  ->  00000100

	//printf("%hhd\n", -119 >> 3);	// 10001001 ->      ???10001001 -> 11110001 (-15)
	////printf("%hhd\n", -119 / 8);
	//printf("%hhu\n",  137 >> 3);	// 10001001 ->      ???10001001 -> 00010001 (17)
	////printf("%hhu\n", 137 / 8);

	//printf("%hhd\n", -119 << 4);	// 10001001 ->  10001001????    -> 10010000 (-112)
	//printf("%hhu\n",  137 << 4);	// 10001001 ->  10001001????    -> 10010000 (144)

	//Note: the signed result is machine dependent



	return 0;
}

void int_binary(const int num)
{
	printf("Decimal %12d == Binary ", num);

	const size_t bits = sizeof(num) * CHAR_BIT;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	printf("\n");
}
