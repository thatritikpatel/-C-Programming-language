#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	printf("-----------1");

	abc:


	printf("\n------------2");

	if(y>0){
		y--;
		goto abc;
	}

	printf("\n-----------3");

	getch();
}