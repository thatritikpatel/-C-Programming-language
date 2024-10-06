#include <stdio.h>
#include <conio.h>

int c = 3;

void abc(){
	if(c){
		c--;
		abc();
	}

	printf("\n%d",c);
}


void main(){
	clrscr();

	abc();

	getch();
}