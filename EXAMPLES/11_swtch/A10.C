#include <stdio.h>
#include <conio.h>

void main(){
	int y,a=2;
	clrscr();

	printf("press 1 for hindi, 2 for english and 3 for tamil: ");
	scanf("%d",&y);

	switch(y){
		case 1:
			printf("H");
			break;
		case 1+1:
			printf("E");
			break;
		case 2+1:
			printf("T");
			break;
		/*
		case a+2:
			printf("T");
			break; */
		default:
			printf("invalid input!");
	}

	getch();
}