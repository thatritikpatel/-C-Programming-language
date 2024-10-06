#include <stdio.h>
#include <conio.h>

void main(){
	int y;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	switch(y){
		case 1:
		case 2:
		case 3:
			printf("weak number");
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			printf("strong number");
			break;
		default:
			printf("very strong number");
	}

	getch();
}