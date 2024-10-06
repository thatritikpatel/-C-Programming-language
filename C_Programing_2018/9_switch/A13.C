#include <stdio.h>
#include <conio.h>

void main(){
	int x;
	clrscr();


	switch(3,5,2,1){
		case 0:
			printf("~~~~~0");
			break;
		case 1:
			printf("~~~~~1");
			break;
		case 2:
			printf("~~~~~2");
			break;
		default:
			printf("####");
	}

	getch();
}