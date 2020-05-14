#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double speed = 1.0;
	const unsigned repeat_max = 50;

	double time = 0.0;			// Elapsed time
	double dist_arch = 0.0;		// Achilleus distance from start point
	double dist_turtle = 1.0;	// rabbit distance from start point
	double speed_arch = 10.0;
	double speed_turtle = 0.001;
	double dt = 0.01;
	//unsigned i;

	printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",
		time, dt, dist_arch, dist_turtle);






	return 0;
}