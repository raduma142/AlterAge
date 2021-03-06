//Init
void init(){
	//Init player position
	plrA = 0;
	plrR = 10;
	
	//Init screen Size
	w = 60;
	h = 20;
	sR1 = plrR - h / 2;
	sR2 = plrR + h / 2;
	sA = 2 * atan(w / 2 / sR1);
	sA1 = sA / 2;
	sA2 = -sA1;
	
	//Init screen_content
	screen_content = (char **) malloc(w * sizeof(char *));
	for (int x = 0; x < w; x++){
		screen_content[x] = (char *) malloc(h * sizeof(char));
		for (int y = 0; y < h; y++){
			screen_content[x][y] = ' ';
		}
	}
	
	//Init world_description
	world_desc_N = 2;
	world_desc = (struct F_t *) malloc(world_desc_N * sizeof(struct F_t));
	
	world_desc[0].A1 = -2;
	world_desc[0].A2 = 2;
	world_desc[0].a = 0;
	world_desc[0].b = 0;
	world_desc[0].c = 8;
	
	world_desc[1].A1 = 0;
	world_desc[1].A2 = 3;
	world_desc[1].a = 0;
	world_desc[1].b = 0;
	world_desc[1].c = 12;
}
