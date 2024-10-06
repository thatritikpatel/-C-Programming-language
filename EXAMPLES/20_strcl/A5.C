#include <stdio.h>
#include <conio.h>


//extern int y;
extern int y = 8;

void go(){
	//extern int y;
	printf("\t%d",y);
	y = 78;
}


void go2(){
	//extern int y;
	printf("\t%d",y);
}

void main(){
	//extern int y;

	clrscr();

	printf("\t%d",y);

	y = 45;

	go();
	go2();
	printf("\t%d",y);
	process();

	getch();
}

int y;


















