
//Data in main.c

void render(char **scr_cont) {
	//Clear Screen_content
	for (int x = 0; x < w; x++){
		for (int y = 0; y < h; y++){
			scr_cont[x][y] = ' ';
		}
	}
	
	//Write to Screen_content
	for (int i = 0; i < world_desc_N; i++){
		//Reading paramenters
		double A1 = world_desc[i].A1;
		double A2 = world_desc[i].A2;
		double a = world_desc[i].a;
		double b = world_desc[i].b;
		double c = world_desc[i].c;
		
		//Construct R = aA^2 + bA + c to screen_content
		double R;
		int sX, sY;
		for (double A = A1; A < A2; A += (A2 - A1) / w){
			R = a * A * A + b * A + c;
			sX = (int) w / 2 + R * cos(A + sA / 2);
			sY = (int) h - R * sin(A + sA / 2);
			
			sY += (int) sR1;
			if (sX >= 0 && sX < w){
				if (sY >= 0 && sY < h){
					scr_cont[sX][sY] = '#';
				}
			}
			
		}
		
		//Draw player
		int plrX = (int) w/2 + plrR * cos(plrA + sA / 2);
		int plrY = (int) h - plrR * sin(plrA + sA / 2);
		scr_cont[plrX][plrY] = 'K';
	}
}
