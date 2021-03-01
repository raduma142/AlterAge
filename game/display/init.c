void dMap_init(char** dMap, short w, short h){
	//Clear display map
	for (int x = 0; x < w; x++){
		for (int y = 0; y < h; y++){
			dMap[x][y] = ' ';
		}
	}
}
