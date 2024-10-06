#include <stdio.h>
#include <conio.h>

void go(){
	extern int y;
	printf("%d\n",y);
}

void main(){
	int y = 89;
	clrscr();

	printf("%d\n",y);
	go();

	getch();
}