#include <ncurses.h>
#include <iostream>


void init_curses();
void print_map();

int main() {
	initscr();
	getch();
	endwin();
    return 0;
}

void init_curses()
{
	initscr();
}

void print_map()
{
	
}
