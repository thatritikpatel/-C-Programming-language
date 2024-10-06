#include <stdio.h>
#include <conio.h>

void main(){
	int x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	switch(x){
		default:
			printf("####");
		case 2:
			printf("~~~~~2");
			//break;
		case 0:
			printf("~~~~~0");
			//break;
		case 1:
			printf("~~~~~1");
			//break;
	}

	getch();
}