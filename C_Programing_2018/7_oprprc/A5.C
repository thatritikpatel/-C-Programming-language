#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	y = printf("tyc")||printf("abc")&&printf("ab");


	printf("%d",y);

	getch();
}