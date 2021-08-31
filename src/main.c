/*
	main.c  -  main program loop for rogue
*/

#include <rogue.h>


const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 100;


Entity* player;
Tile** map;


int main(void)
{
	cursesSetup();

	Position start_pos = { 10, 20 };  // start position for player
	player = createPlayer(start_pos); // initialize the player variable
	map = createMapTiles();           // initialize the map variable

	gameLoop();

	closeGame();


	return 0;
}