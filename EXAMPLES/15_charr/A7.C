#include <stdio.h>
#include <conio.h>

void main(){
	char x[8];

	clrscr();

	printf("%s",x);

	x[0] = 'R';
	x[1] = 'A';
	x[2] = 'M';
	x[3] = '\0';

	printf("\n%s",x);

	getch();
}