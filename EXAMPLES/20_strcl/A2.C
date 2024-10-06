#include <stdio.h>
#include <conio.h>

int y = 10;

void go(){
	printf("\t%d\n",y);
}

void main(){
	clrscr();

	printf("\t%d\n",y);
	y = 78;
	go();

	getch();
}

