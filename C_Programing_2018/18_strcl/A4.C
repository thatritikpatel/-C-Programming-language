#include <stdio.h>
#include <conio.h>

void go(){
	extern int y;
	printf("%d",y);
}

int y = 67;

void main(){

	clrscr();

	printf("%d\n",y);
	y = 56;
	go();

	getch();
}