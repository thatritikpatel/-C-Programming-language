#include <stdio.h>
#include <conio.h>

void main(){
	enum CoffeeSize {SMALL=100,MEDIUM=300,LARGE=500};

	enum CoffeeSize x = LARGE;
	int i;
	clrscr();

	printf("\t%d %s",x,x);

	getch();
}