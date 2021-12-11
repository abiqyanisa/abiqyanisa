#include <ncurses.h>
#include <iostream>
#include <windows.h>

using namespace std;
	
char level;
char pemain[50];

int main(){
	
	initscr();

	mvprintw(15, 25, "Pilih Level : ");
	mvprintw(16, 25, "1. Mudah");
	mvprintw(17, 25, "2. Susah");
	mvprintw(18, 25, "-> ");
	scanw("%c", &level);
	
	clear();
	
	if(level=='1'){
		mvprintw(14,20, " Instruksi : ");
		mvprintw(15,20, " 1. Gunakan tombol aswd untuk bergerak");
		mvprintw(16,20, " 2. Makan titik-titik untuk mendapatkan poin");
		mvprintw(17,20, " 3. Hindari pagar");
	}
	else if(level=='2'){
		mvprintw(14,20, " Instruksi : ");
		mvprintw(15,20, " 1. Gunakan tombol aswd untuk bergerak");
		mvprintw(16,20, " 2. Makan bintang untuk mendapatkan poin");
		mvprintw(17,20, " 3. Hindari pagar");
	}
	
	getch();
	endwin();
	return 0;

}
