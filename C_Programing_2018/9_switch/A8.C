#include <stdio.h>
#include <conio.h>

void main(){
	int x;
	int y = 1;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("~~~~~1");
			break;
		case 1+y:
			printf("~~~~~2 #");
			break;
		case 3:
			printf("~~~~~3");
		default:
			printf("####");
	}

	getch();
}