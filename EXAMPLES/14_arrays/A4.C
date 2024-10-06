#include <stdio.h>
#include <conio.h>

void main(){
	int x[4];

	clrscr();

	printf("%d\n",x[0]);
	printf("%d\n",x[1]);
	printf("%d\n",x[2]);
	printf("%d",x[3]);

	x[0] = 10;
	x[1] = 20;
	x[2] = 30;
	x[3] = 40;

	printf("\n%d\n",x[0]);
	printf("%d\n",x[1]);
	printf("%d\n",x[2]);
	printf("%d",x[3]);

	getch();
}