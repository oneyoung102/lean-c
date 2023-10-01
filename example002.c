#include <ncurses.h>

int main() {
char en;
initscr();
start_color();
en = getch();
if(en=='s'){
init_pair(1,3,0);
attron(A_BOLD);
mvprintf(10,10,"ncurses test");
}
endwin();
}
