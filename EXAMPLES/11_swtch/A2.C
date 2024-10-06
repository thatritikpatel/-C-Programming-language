#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Press 1 for Hindi, Press 2 for English and press 3 for Tamil: ");
	scanf("%d",&y);

	switch(y){
		case 1:
			printf("Hindi");

		case 2:
			printf("English");

		case 3:
			printf("Tamil");

		default:
			printf("Invalid Input!");
	}

	printf("\n#############");

	getch();
}