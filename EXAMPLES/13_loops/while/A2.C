#include <stdio.h>
#include <conio.h>

void main(){
	char x = 'y';

	clrscr();

	while(x=='y'){
		printf("Press y/n: ");
		scanf("%c",&x);
		fflush(stdin);
	}

	printf("\n\noutside while");

	getch();
}