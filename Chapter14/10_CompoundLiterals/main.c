#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	//char* title;		// Not recommended
	//char* author;		// Not recommended
	float price;
};

struct rectangle
{
	double width;
	double height;
};

//double rect_area(struct rectangle r)
//{
//
//}
//
//double rect_area_ptr(struct rectangle * r)
//{
//
//}

int main()
{
	struct book book_to_read = { "Crime and Punishment", "Fyodor Dostoyevsky", 11.25f };

	/*
		Compound literals
		- Temporary structure values
	*/
	

	//book_to_read = { "Alice in Wonderland", "Lewis Carroll", 20.3f };//Error




	return 0;
}
