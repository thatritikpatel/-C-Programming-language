#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	//y = 12<13?printf("ram"):printf("mohan");
	y = 12>13?printf("ram"):printf("mohan");

	printf("%d",y);

	getch();
}