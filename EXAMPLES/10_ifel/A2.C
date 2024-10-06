#include <stdio.h>
#include <conio.h>

void main(){
	char ch;

	clrscr();

	printf("\nstep -1");

	printf("\n\npress 1 for step2a or 2 for step2b: ");
	scanf("%c",&ch);

	if(ch=='1'){
		printf("\nstep -2a");
	}else{
		printf("\nstep -2b");
	}

	printf("\nstep -3");


	getch();
}