#include <stdio.h>
#include <conio.h>

void main(){
	char x;

	clrscr();

	printf("Enter a character: ");
	scanf("%c",&x);

	switch(x){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	}

	getch();
}