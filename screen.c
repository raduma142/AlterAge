#include <stdio.h>

void screen(char **scr_cont) {
	for (int x = 0; x < 20; x++){
		for (int y = 0; y < 10; y++){
			printf("%c", scr_cont[x][y]);
		}
		printf("\n");
	}
}
