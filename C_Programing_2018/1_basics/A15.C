#include <stdio.h>
#include <conio.h>

void main(){
	unsigned int x = 32768;
	signed int y = 32768;

	clrscr();

	printf("%u - %d",x,x);
	printf("\n%u - %d",y,y);

	getch();
}