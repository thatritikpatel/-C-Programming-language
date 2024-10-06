#include <stdio.h>
#include <conio.h>

void go();

static int y = 9;

void main(){
	clrscr();

	go();
	go();
	go();

	printf("%d",y);

	getch();
}

void go(){
	//extern int y;
	printf("%d\n",y);
	y++;
}









