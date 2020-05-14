#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
		Program written in C

		Translating
		Preprocessing
		Compiling
		Linking

		Executable
	*/

	/*
		International characters
	*/

	puts("안녕하세요? 한글을 사랑합니다.\n");

	/*
		Trigraph Sequences
		- Some keyboards don't provide all the symbols used in C.
		- Three-character sequences

		Trigraph		Replacement
		??=				#
		??/				\
		??'				^
		??(				[
		??)				]
		??!				|
		??<				{
		??>				}
		??-				~

		/Zc:trigraphs
	*/





	/*
		Digraphs
		- Two-character sequences

		Digraph			Equivalent
		<:				[
		:>				]
		<%				{
		%>				}
		%:				#
	*/



	/* Two physical lines vs One logical line */



	
	/*
		Tokens
		- Groups separated from each other by spaces, tabs, or line breaks
		Whitespace characters -> a single space
	*/



	return 0;
}