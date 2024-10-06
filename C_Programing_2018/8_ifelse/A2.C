#include <stdio.h>
#include <conio.h>

void main(){
	char x;

	clrscr();

	printf("Do you want sugar?(y/n) ");
	scanf("%c",&x);

	if(x=='y'){
		printf("\nInput sugar");
	}

	printf("\nserve tea");


	getch();
}