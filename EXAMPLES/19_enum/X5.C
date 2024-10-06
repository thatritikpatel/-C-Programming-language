#include <stdio.h>
#include <conio.h>

void main(){
	enum  {SMALL=100,MEDIUM=300,LARGE=500} x=SMALL,y=MEDIUM;

	clrscr();

	printf("\t%d %d",x,y);

	getch();
}