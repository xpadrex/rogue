#include <rogue.h>


Entity* createPlayer(Position start_pos)
{
	Entity* newPlayer = calloc(1, sizeof(Entity));

	newPlayer->pos.y = start_pos.y;
	newPlayer->pos.x = start_pos.x;
	newPlayer->ch = '@';

	return newPlayer;
}


void handleInput(int input)
{
	switch(input)
	{
		// move up
		case 'w':
			player->pos.y--;
			break;
		// move down
		case 's':
			player->pos.y++;
			break;
		// move left
		case 'a':
			player->pos.x--;
			break;
		// move right
		case 'd':
			player->pos.x++;
			break;
		default:
			break;
	}
}

