#include "./display/init.c"

int draw(void *drawArgs)
{
	short w = 20;
	short h = 10;
	char dMap[w][h];
	char (*p)[w] = dMap;
	
	dMap_init(&p, w, h);	
	//Construct Frame
	for (int x = 0; x < w; x++){
		dMap[x][0] = '#';
		dMap[x][h - 1] = '#';
	}
	for (int y = 0; y < h; y++){
		dMap[0][y] = '#';
		dMap[w - 1][y] = '#';
	}
	
	//draw Display Map to Screen
	for (int x = 0; x < w; x++){
		for (int y = 0; y < h; y++){
			printf("%c", dMap[x][y]);
		}
		printf("\n");
	}
	printf("\n");
		
	
	//ruct timespec duration = {1, 0};
	//rd_sleep(&duration, NULL);
	
	//rd_exit(0);
	
	return(0);
}
