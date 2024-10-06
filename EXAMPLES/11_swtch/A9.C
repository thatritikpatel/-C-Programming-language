#include <stdio.h>
#include <conio.h>

void main(){
	char y;
	clrscr();

	printf("press +,-,*,/: ");
	scanf("%c",&y);

	switch(y){
		case '+':
			printf("+");
			break;
		case '-':
			printf("-");
			break;
		case '*':
			printf("*");
			break;
		case '/':
			printf("/");
			break;
		default:
			printf("invalid input!");
	}

	getch();
}