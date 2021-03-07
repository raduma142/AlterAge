//Data in main.c

void screen() {
	//Clear screen
	//printf("\033[2J"); /* Clear the entire screen. */
	printf("\033[0;0f"); /* Move cursor to the top left hand corner*/
	//printf("\033c");
	
	//Draw to screen
	for (int y = 0; y < h; y++){
		for (int x = 0; x < w; x++){
			printf("%c", scr_cont[x][y]);
		}
		printf("\n");
	}
	//printf("%f", sA);
}
