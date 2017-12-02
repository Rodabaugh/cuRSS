#include <ncurses.h>

int shouldExit = 0;

int main(){
	initscr();
	printw("Welcome to cuRSS! Use CTRL+C to close the program.");
	while (shouldExit == 0){
		refresh();
		getch();
		printw("You pressed a key!\n");
	}
	endwin();
	return 0;
}
