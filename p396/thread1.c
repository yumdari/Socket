#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
void* thread_main(void *arg);

int main(int argc, char *argv[])
{
	pthread_t t_id;
	int thread_param = 5;

	if (pthread_create(&t_id, NULL, thread_main, (void*)&thread_param)!=0)
	{
		puts("pthread_create() error");
		return -1;
	};
	sleep(10); puts("end of main");
	return 0;
}

void* thread_main(void *arg)
{
	int idx;
	int cnt =* ((int*)arg);
	for (idx = 0; idx < cnt; idx++)
	{
		sleep(1); puts("runnig thread");
	}
	return NULL;
}
