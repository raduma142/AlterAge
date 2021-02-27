#include <threads.h>
#include <time.h>

int draw(void *drawArgs)
{
	int* count = (int *) drawArgs;
	printf("%d\n", *count);
	*count += 1;
	
	struct timespec duration = {1, 0};
	thrd_sleep(&duration, NULL);
	
	thrd_exit(0);
	
	return(0);
}

void game()
{
	clock_t clockNow;
	thrd_t thrdDrawId;
	int drawArgs;
	
	drawArgs = 0;
	
	do
	{
		clockNow = clock();
		if (clock() - clockNow > 100)
			thrd_create(&thrdDrawId, draw, (void *)&drawArgs);
	} while (1);
	
	//thrd_join(thrdDrawId, NULL);

}
