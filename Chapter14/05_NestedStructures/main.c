#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 20

struct names {			// A structure
	char given[LEN];	// first name
	char family[LEN];	// last name
};

struct reservation {	// Another structure
	struct names guest;	// a nested structure
	struct names host;  // one more nested structure
	char food[LEN];
	char place[LEN];

	// time
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main(void)
{
	struct reservation res = {
		.guest = {"Nick", "Carraway"},
		.host = {"Jay", "Gatsby"},
		.place = {"the Gatsby mansion"},
		.food = {"Escargot"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};

/*
Dear Nick Carraway,
I would like to serve you Escargot.
Please visit the Gatsby mansion on 10/4/1925 at 18:30.
Sincerely,
Jay Gatsby
*/

	return 0;
}