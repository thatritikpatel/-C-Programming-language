#include <stdio.h>
#include <conio.h>

void main(){
	float y;
	clrscr();

	printf("Enter a number: ");
	scanf("%f",&y);

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