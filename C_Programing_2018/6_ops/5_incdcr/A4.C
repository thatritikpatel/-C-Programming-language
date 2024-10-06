#include <stdio.h>
#include <conio.h>

void main(){
	int x = 34;

	clrscr();

	printf("Before: %d",x);

	//x++;
	//++x;
	//x--;
	--x;

	printf("\nAfter: %d",x);

	getch();
}