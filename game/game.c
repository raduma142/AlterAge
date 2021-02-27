#include <threads.h>
#include <time.h>
#include "draw.c"

void game()
{
	clock_t clockNow;
	thrd_t thrdDrawId;
	int drawArgs;
	
	drawArgs = 0;
	
	do
	{
		clockNow = clock();
		if (clock() - clockNow > 500){
			thrd_create(&thrdDrawId, draw, (void *)&drawArgs);
			thrd_join(thrdDrawId, NULL);
		}
	} while (1);
}
