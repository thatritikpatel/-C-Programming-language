#include <stdio.h>
#include <conio.h>

void main(){
	int i = 5;
	clrscr();

	do
		printf("%d ",i);
		//printf("\n-----\n");
	while(i--);

	getch();
}