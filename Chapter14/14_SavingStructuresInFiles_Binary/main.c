#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{


	return 0;
}

void print_books(const struct book* books, int n)
{

}

void write_books(const char* filename, const struct book* books, int n)
{

}

void read_books2(const char* filename, struct book** books_dptr, int* n_ptr)//Note: double pointer
{

}