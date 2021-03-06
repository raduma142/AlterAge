#include <math.h>

//Data in main.c

void render(char **scr_cont) {
	//Clear Screen_content
	for (int x = 0; x < w; x++){
		for (int y = 0; y < h; y++){
			scr_cont[x][y] = ' ';
		}
	}
	//Reading paramenters
	double A1 = world_desc[0].A1;
	double A2 = world_desc[0].A2;
	double a = world_desc[0].a;
	double b = world_desc[0].b;
	double c = world_desc[0].c;
	
	double sA1 = 0.0;
	double sA2 = 3.15;
	double sR1 = 2.0;
	double sR2 = sR1 + 10;
	
	//Construct R = aA^2 + bA + c to screen_content
	double R;
	int sX, sY;
	for (double A = A1; A < A2; A += (A2 - A1) / w){
		R = a * A * A + b * A + c;
		sX = (int) w / 2 + R * cos(A);
		sY = (int) h - R * sin(A);
		
		sY -= (int) sR1;
		if (sX >= 0 && sX < w){
			if (sY >= 0 && sY < h){
				scr_cont[sX][sY] = '#';
			}
		}
		
	}
}
