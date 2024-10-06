#include <stdio.h>
#include <conio.h>

void main(){
	int y,a=2;
	clrscr();

	switch(1,2){
		case 1:
			printf("H");
			break;
		case 2:
			printf("E");
			break;
		case 3:
			printf("T");
			break;
		default:
			printf("invalid input!");
	}

	getch();
}