#include <stdio.h>
#include <conio.h>

int x = 0;

void abc(){
	printf("%d\t",x++);
	abc();
}


void main(){
	clrscr();


	abc();


	getch();
}