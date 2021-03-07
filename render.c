//Data in main.c

//Clear Screen_content
void render_clearSC(){
	for (int x = 0; x < w; x++)
		for (int y = 0; y < h; y++)
			scr_cont[x][y] = ' ';
}

void render() {
	render_clearSC();
	//Write to Screen_content
	for (int i = 0; i < world_desc_N; i++){
		//Reading paramenters
		double A1 = world_desc[i].A1;
		double A2 = world_desc[i].A2;
		double a = world_desc[i].a;
		double b = world_desc[i].b;
		double c = world_desc[i].c;
		
		//Construct R = aA^2 + bA + c to screen_content
		double R, X, Y;
		int sX, sY;
		
		for (double A = sA1; A <= sA2; A += sA / w)
			if (A >= A1 && A <= A2){
				
				R = a * A * A + b * A + c;
				X = R * cos(A + sA / 2);
				Y = R * sin(A + sA / 2);
				
				sX = round(w / 2 + X);
				sY = round(h - (Y - sR1));
				if (sX >= 0 && sX < w)
					if (sY >= 0 && sY < h)
						scr_cont[sX][sY] = '#';
					
				
				screen();
				printf("%f %d", X, sX);
				getchar();
			}
		
		//Draw player
		scr_cont[w / 2][h / 2] = 'K';
	}
}
