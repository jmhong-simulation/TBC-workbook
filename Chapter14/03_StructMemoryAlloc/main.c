#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 
		Well aligned structure
	*/





	/*
	 0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|
	|int a  |float b|double c             |
	4 + 4 + 8 = 16
	*/

	



	/*
		padding (struct member alignment)
		- 1 word: 4 bytes in x86, 8 bytes in x64
	*/

	



	/* Without padding
	 0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16
	|a|float b|double c          | ?  ?  ?
	1 + 4 + 8 = 13
	*/

	/* With padding
	 0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16
	|char a |float b|double c             |
	4(char?) + 4 + 8 = 16
	*/

	

	



	/*
	|0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|24
	|float a        | double b            | char c                |
	8(float?) + 8 + 8(char?) = 24
	*/

	



	


	/*
	|0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|24
	| char a        | double b            | double c              |
	8(char?) + 8 + 8 = 24
	*/

	


/*
|f[0].name        | f[0].age | f[0].height | ... ... |f[3].name        | f[3].age | f[3].height |
*/

	return 0;
}