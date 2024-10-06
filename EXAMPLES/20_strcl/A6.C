#include <stdio.h>
#include <conio.h>
#include "fora5.c"

void go(){
	//int y = 1;
	//static int y = 1;
	static int y;   //initialized by default value

	printf("\t%d\n",y);
	y++;
}

void main(){
	clrscr();

	go();
	go();
	go();

	//printf("%d",y);
	process();

	getch();
}