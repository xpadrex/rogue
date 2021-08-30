#include <rogue.h>

void cursesSetup(void)
{
    initscr();
    noecho();
    curs_set(0);
}

void gameLoop(void)
{
    int ch;

    mvaddch(player->pos.y, player->pos.x, player->ch);

    while(ch = getch())
    {
        if (ch == 'Q')
        {
            break;
        }

        handleInput(ch);
        clear();
        mvaddch(player->pos.y, player->pos.x, player->ch);
    }
}

void closeGame(void)
{
    endwin();
    free(player);
}