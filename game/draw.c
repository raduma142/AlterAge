struct displaySize {
	short w;
	short h;
} dSize;

int draw(void *drawArgs)
{
	dSize.w = 10;
	dSize.h = 10;
	
	char drawPixels[dSize.h][dSize.w];
	
	for (int y = 0; y < dSize.h; y++)
		for (int x = 0; x < dSize.w; x++){
			drawPixels[y][x] = '#';
		}
		
	for (int y = 0; y < dSize.h; y++){
		for (int x = 0; x < dSize.w; x++){
			printf("%c", drawPixels[y][x]);
		}
		printf("\n");
	}
	printf("\n");
		
	
	//ruct timespec duration = {1, 0};
	//rd_sleep(&duration, NULL);
	
	//rd_exit(0);
	
	return(0);
}
