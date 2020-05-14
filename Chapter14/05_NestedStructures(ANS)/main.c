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

	const char* formatted =
		"\
Dear %s %s,\nI would like to serve you %s.\n\
Please visit %s on %d/%d/%d at %d:%d.\n\
Sincerely,\n\
% s %s\
";

	printf(formatted, res.guest.given, res.guest.family, res.food,
		res.place, res.day, res.month, res.year, res.hours, res.minutes,
		res.host.given, res.host.family);

	return 0;
}