#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

//_Atomic int acnt = 0; //NA

DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	//acnt += n;	//NA
	printf("Printing from Thread \n");
	return 0;
}

int main()
{
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
	
	if (thread) 
		WaitForSingleObject(thread, INFINITE);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // sleep().
#include <pthread.h>
#include <stdatomic.h>

_Atomic int acnt = 0;// atomic type qualifer (C11)

// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
void *myThreadFun(void *vargp)
{
	int n = 1;// thread storage duration
	for (int j = 0; j < 10; ++j)
	{
		sleep(1);
		acnt += n;
		printf("Printing from Thread %d %llu\n", acnt, (unsigned long long)&n);
	}

	return NULL;
}

int main()
{
	pthread_t thread_id1, thread_id2;

	printf("Before Thread\n");

	pthread_create(&thread_id1, NULL, myThreadFun, NULL);
	pthread_create(&thread_id2, NULL, myThreadFun, NULL);

	pthread_join(thread_id1, NULL);
	pthread_join(thread_id2, NULL);

	printf("After Thread\n");
	printf("Atomic %d\n", acnt);
	return 0;
}


To compile
	$ gcc <file-name.c> -o <output-file-name> -lpthread
To run
	$ ./<output-file-name>

*/