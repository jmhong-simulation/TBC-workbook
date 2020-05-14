static unsigned int next = 1;

int my_rand()
{



	return (int)next;
}

void my_srand(unsigned int seed)
{
	next = seed;
}