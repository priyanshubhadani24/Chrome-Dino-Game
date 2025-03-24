#include <ncurses/ncurses.h>
#include "appearance.h"
#include "compute.h"

int main() {
	initscr();
	start_color();
	curs_set(FALSE);
	startMenu();
	endwin();
}


// gcc main.c appearance.c compute.c -o main.exe -lncurses -DNCURSES_STATIC