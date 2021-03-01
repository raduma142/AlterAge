/*
 * main.c
 * 
 * Copyright 2021  <pi@raspberrypi>
 * 
 * 
 */


#include <stdio.h>

#include "./menu/menu.c"
#include "./game/game.c"

int main(int argc, char **argv)
{
	menu();
	game();
	return 0;
}

