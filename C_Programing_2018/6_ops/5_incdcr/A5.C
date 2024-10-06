#include <stdio.h>
#include <conio.h>

void main(){
	int x = 34;

	clrscr();

	printf("Before: %d",x);

	//printf("\nNow: %d",x++);
	//printf("\nNow: %d",++x);
	printf("\nNow %d",x--);
	//printf("\nNow: %d",--x);

	printf("\nAfter: %d",x);

	getch();
}