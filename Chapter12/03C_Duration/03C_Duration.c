#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Storage duration:
	- static storage duration
	(Note: 'static' keyword indicates the linkage type, not the storage duration)
	- automatic storage duration
	- allocated storage duration
	- thread storage duration
*/

void count()
{

}

void static_count()
{

}

int main()
{
	count();
	count();
	static_count();
	static_count();

	return 0;
}