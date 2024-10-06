#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	if(y<45)
		printf("Hello");
	else if(y<60)
		printf("\nBye...");
		//printf("\n$$$$$$");
	else
		printf("\n####");


	printf("\n~~~~~~~");


	getch();
}