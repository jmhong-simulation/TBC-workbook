#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h> // strlen()
#include <stdlib.h>

unsigned to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	/*
		Regular Logical Operators : &&, ||, and !

		Bitwise Logical Operators :
		- Bitwise NOT ~
		- Bitwise AND &
		- Bitwise OR |
		- Bitwise EXCLUSIVE OR ^
	*/

	unsigned char i		= to_decimal("00000110");
	unsigned char mask  = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i | mask);	// Bitwise OR   (binary operator)
	print_binary(i ^ mask);	// Bitwise XOR  (binary operator)

	/*
		The bitwise NOT, or complement, is a unary operation 
		that performs logical negation on each bit, 
		forming the ones' complement of the given binary value.
	*/

	print_binary(~i);			// Bitwise NOT (unary operator)


	return 0;
}

void print_binary(const unsigned char num)
{
	printf("Decimal %3d \t== Binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i) {

		const unsigned int mask = (int)pow(2, bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	printf("\n");
}

unsigned to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned sum = 0;
	for (size_t i = 0; i < bits; ++i) {

		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0') {
			printf("Wrong character : %c", bi[i]);
			exit(1);
		}
	}

	return sum;
}

