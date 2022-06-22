#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM_THREAD 100

void* thread_inc(void*arg);
void* thread_des(void*arg);
long long num = 0;	// long long형은 64비트 정수 자료형

int main(int argc, char *argv[])
{
	pthread_t thread_id[NUM_THREAD];
	int idx;

	printf("sizeof long long : %d \n", sizeof(long long));	// long long 크기확인
	for(idx = 0; idx < NUM_THREAD; idx++)
	{
		if(idx%2)
			pthread_create(&(thread_id[idx]), NULL, thread_inc, NULL);
		else
			pthread_create(&(thread_id[idx]), NULL, thread_des, NULL);
	}

	for(idx = 0; idx < NUM_THREAD; idx++)
		pthread_join(thread_id[idx], NULL);

	printf("result : %lld \n", num);
	return 0;
}

void * thread_inc(void * arg)
{
	int idx;
	for(idx = 0; idx < 50000000; idx ++)
		num += 1;
	return NULL;
}

void * thread_des(void * arg)
{
	int idx;
	for(idx = 0; idx < 50000000; idx ++)
		num -= 1;
	return NULL;
}
