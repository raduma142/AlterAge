#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <threads.h>
#include <time.h>
//#include <time.h>

//Common DATA

//Screen
char **screen_content;
int w, h;
double sA1, sA2, sA;
double sR1, sR2;
//Description
struct F_t {
	double A1, A2;
	double a, b, c;
};
struct F_t *world_desc;
int world_desc_N;
//Player
int plrA, plrR;

#include "render.c"
#include "screen.c"
#include "control.c"
#include "nature.c"
#include "init.c"

//Engine
int main(int argc, char **argv)
{
	init();
	
	thrd_t thrdDrawId;
	thrd_create(&thrdDrawId, put_enter, NULL);
	
	while (1) {
		control();
		nature();
		render(screen_content);
		screen(screen_content);
	};
	
	//Free
	free(world_desc);
	for (int i = 0; i < w; i++){
		free(screen_content[i]);
	}
	free(screen_content);
	return 0;
}

