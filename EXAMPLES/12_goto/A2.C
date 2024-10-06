#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	printf("------------1");

	if(y<10){
		goto abc;
	}

	printf("-----------2");

	abc:

	printf("\n-------------3");

	getch();
}