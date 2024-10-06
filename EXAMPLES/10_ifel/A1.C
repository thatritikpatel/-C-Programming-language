#include <stdio.h>
#include <conio.h>

void main(){
	char ch;

	clrscr();

	printf("step -1");

	printf("\nDo you want to perform step -2? Press y/n: ");
	scanf("%c",&ch);

	if(ch=='y'){
		printf("\nstep -2");
	}

	printf("\nstep -3");


	getch();
}

