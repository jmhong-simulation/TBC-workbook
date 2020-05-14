#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count()
{

}

void static_count()
{

}

//int func(static int i)	// Warning (Error in GCC)
//{
//}

void counter_caller()
{

}

void static_counter_caller()
{

}

int main()
{
	count();
	count();
	counter_caller();

	static_count();
	static_count();
	static_counter_caller();

	return 0;
}