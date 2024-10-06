#include <stdio.h>
#include <conio.h>

void main(){
	char x;

	clrscr();

	printf("Enter a character:(y/n/o) ");
	scanf("%c",&x);


	switch(x){
		case 'y':
			printf("yes");
			break;
		case 'n':
			printf("no");
			break;
		case 'o':
			printf("other");
			break;
		default:
			printf("Invalid");
	}

	getch();
}