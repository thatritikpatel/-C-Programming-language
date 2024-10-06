#include <stdio.h>
#include <conio.h>

void main(){
	char c;

	clrscr();

	printf("Please enter a character: ");
	scanf("%c",&c);

	printf("\n\n%c",c);

	getch();
}