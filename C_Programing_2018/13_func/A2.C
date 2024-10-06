#include <stdio.h>
#include <conio.h>

void pro(){
	printf("\n~~~~ 7");
}

void abc(){
	printf("\n~~~~ 5");
	pro();
	printf("\n~~~~ 9");
}

void main(){
	clrscr();

	printf("\n~~~~~3");
	abc();
	printf("\n~~~~~2");

	getch();
}