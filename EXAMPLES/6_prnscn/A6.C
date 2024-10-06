#include <stdio.h>
#include <conio.h>

void main(){
	char c,d,e;

	clrscr();

	printf("Please enter three characters: ");
	scanf("%c%c%c",&c,&d,&e);

	//printf("\n\n%c",c);

	printf("\n\n%c %c %c",c,d,e);

	getch();
}