#include <stdio.h>
#include <conio.h>

void main(){
	int y,a=3;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	switch(y){
		case 1:
			printf("hello");
			break;
		case 2:
			printf("Bye");
			break;
		case a:
			printf("hi");
			break;
		default:
			printf("very strong number");
	}

	getch();
}