#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

//struct book
//{
//
//};

void print_books(const struct book* books, int n);
void write_books(const char * filename, const struct book* books, int n);
struct book* read_books(const char* filename, int * n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{




	//my_books[0] = (struct book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	//my_books[1] = (struct book){ "Hamlet", "William Shakespeare" };
	//my_books[2] = (struct book){ "The Odyssey", "Homer" };





	return 0;
}

void print_books(const struct book* books, int n)
{

}

void write_books(const char* filename, const struct book* books, int n)
{

}

//struct book* read_books(const char* filename, int * n_ptr)
//{
//
//}

void read_books2(const char* filename, struct book** books_dptr, int* n_ptr)//Note: double pointer
{

}