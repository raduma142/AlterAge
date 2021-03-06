#include <stdlib.h>
//#include <time.h>

//Common DATA
char **screen_content;
struct F_t {
	double A1, A2;
	double a, b, c;
};
struct F_t *world_desc;
int w, h;

#include "render.c"
#include "screen.c"
#include "control.c"
#include "nature.c"

//Init
void init(){
	//Init screen Size
	w = 40;
	h = 15;
	
	//Init screen_content
	screen_content = (char **) malloc(w * sizeof(char *));
	for (int x = 0; x < w; x++){
		screen_content[x] = (char *) malloc(h * sizeof(char));
		for (int y = 0; y < h; y++){
			screen_content[x][y] = ' ';
		}
	}
	
	//Init world_description
	world_desc = (struct F_t *) malloc(1 * sizeof(struct F_t));
	world_desc[0].A1 = 0.0;
	world_desc[0].A2 = 2.1;
	world_desc[0].a = 2;
	world_desc[0].b = 0;
	world_desc[0].c = 5;
	
}

//Engine
int main(int argc, char **argv)
{
	//clock_t clockNow;
	init();
	
	while (1) {
		//clockNow = clock();
		control();
		nature();
		render(screen_content);
		screen(screen_content);
		//if (clock() - clockNow > 500){
		//}
	};
	
	//Free
	free(world_desc);
	for (int i = 0; i < w; i++){
		free(screen_content[i]);
	}
	free(screen_content);
	return 0;
}

