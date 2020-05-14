#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int num;
};

void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(const struct name_count*);
char* s_gets(char* st, int n);

int main()
{
	struct name_count user_name;

	receive_input(&user_name);
	count_characters(&user_name);
	show_result(&user_name);

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);  // vs. scanf()
	if (ret_val)
	{
		find = strchr(st, '\n');	// look for newline
		if (find)					// if the address is not NULL
			* find = '\0';			// place a null character there
		else
			while (getchar() != '\n')
				continue;			// dispose of rest of line
	}

	return ret_val;
}

void receive_input(struct name_count* ptr_nc)
{
	int flag;

	printf("Input your first name:\n>> ");
	
	//s_gets(ptr_nc->first, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->first); // ^ : cap operator
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name:\n>> ");
	
	//s_gets(ptr_nc->last, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->last);
	if (flag != 1)
		printf("Wrong input");
}

void count_characters(struct name_count* ptr_nc)
{
	//ptr_nc->num = strlen(ptr_nc->first) + strlen(ptr_nc->last);
	//ptr_nc->num = (int)strlen(ptr_nc->first) + (int)strlen(ptr_nc->last); // int castings remove warnings
}

void show_result(const struct name_count* ptr_nc)
{
	printf("Hi, %s %s. Your name has %d characters.\n",
		ptr_nc->first, ptr_nc->last, ptr_nc->num);
}
