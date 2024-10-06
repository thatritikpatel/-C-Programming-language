#include <stdio.h>
#include <conio.h>

void main(){
	int x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("~~~~~1");
			break;
		case 1+1:
			printf("~~~~~2 #");
			break;
		case 3:
			printf("~~~~~3");
		default:
			printf("####");
	}

	getch();
}