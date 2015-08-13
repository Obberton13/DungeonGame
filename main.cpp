#include <ncurses.h>
#include <iostream>

void init_curses();

int main() {
	initscr();
	mvprintw(0, 0, "Hello, World!");
	getch();
	endwin();
    return 0;
}

void init_curses()
{
	initscr();
}
