#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	//y = 12<13?20:30;
	y = 12>13?20:30;

	printf("%d",y);

	getch();
}