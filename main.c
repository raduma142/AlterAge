#include <stdlib.h>
//#include <time.h>
#include "screen.c"
#include "control.c"
#include "nature.c"

//Data
char **screen_content;
int world_data[100][100];

//Init
void init(){
	//Init screen_content
	screen_content = (char **) malloc(20 * sizeof(char *));
	for (int x = 0; x < 20; x++){
		screen_content[x] = (char *) malloc(10 * sizeof(char));
		for (int y = 0; y < 10; y++){
			screen_content[x][y] = '3';
		}
	}
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
		screen(screen_content);
		//if (clock() - clockNow > 500){
		//}
	};
	
	//Free screen_content
	for (int i = 0; i < 20; i++){
		free(screen_content[i]);
	}
	free(screen_content);
	return 0;
}

