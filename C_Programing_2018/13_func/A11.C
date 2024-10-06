#include <stdio.h>
#include <conio.h>

void abc();

void mno(){
	abc();
}

//void abc();

void main(){
	clrscr();

	abc();
	mno();

	getch();
}




void abc(){
	printf("\nHello");
}