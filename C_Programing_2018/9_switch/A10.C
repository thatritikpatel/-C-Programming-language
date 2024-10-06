#include <stdio.h>
#include <conio.h>

void main(){
	int x;
	int y = 1;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	switch(x){
		case 'A':
			printf("~~~~~1");
			break;
		case 'a':
			printf("~~~~~2");
			break;
		case '\0':
			printf("~~~~~3");
		default:
			printf("####");
	}

	getch();
}