
// gcc -O0 -g3 -o hello_world_crash hello_world_crash.c -lncurses

// This example is adapted from the Ncurses Programming Howto
// http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/helloworld.html

#include <ncurses.h>
#include <string.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello ");	        /* Print Hello			  */
	refresh();			/* Print it on to the real screen */
	printw("World ");               /* Print       World		  */
	printw("!!!");                  /* Print             !!!	  */
	refresh();			/* Print it on to the real screen */

        char *s = NULL;
        strcpy(s, "Please crash");
        
	endwin();			/* End curses mode		  */

	return 0;
}
