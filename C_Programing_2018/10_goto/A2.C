#include <stdio.h>
#include <conio.h>

void main(){
	int x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	printf("~~~~1");

	if(x<34){
		goto abc;
	}

	printf("\n~~~~2");

	abc:

	printf("\n~~~~3");

	getch();
}