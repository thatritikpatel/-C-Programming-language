#include <stdio.h>
#include <conio.h>

int c = 0;

void abc(){
	printf("\n%d",c++);
	abc();
}


void main(){
	clrscr();

	abc();

	getch();
}