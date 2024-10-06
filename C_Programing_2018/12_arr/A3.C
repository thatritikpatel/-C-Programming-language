#include <stdio.h>
#include <conio.h>

void main(){
	int x[3];

	clrscr();


	printf("%d %d %d",x[0],x[1],x[2]);

	x[0] = 23;
	x[1] = 67;
	x[2] = 92;

	printf("\n%d %d %d",x[0],x[1],x[2]);


	getch();
}