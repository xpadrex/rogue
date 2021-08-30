#ifndef ROGUE_H
#define ROGUE_H


#include <ncurses.h>
#include <stdlib.h>


typedef struct
{
	int y;
	int x;
} Position;


typedef struct
{
	char ch;
	bool walkable;
} Tile;


typedef struct
{
	Position pos;
	char ch;
} Entity;


// engine.c functions
void cursesSetup(void);
void gameLoop(void);
void closeGame(void);


// player.c functions
Entity* createPlayer(Position start_pos);
void handleInput(int input);


// externs
extern const int MAP_HEIGHT;
extern const int MAP_WIDTH;
extern Entity* player;
extern Tile** map;


#endif

