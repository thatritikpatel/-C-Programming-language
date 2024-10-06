#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	if(y<45)
		if(y<12)
			printf("\nBye...");
	else
		printf("\n####");


	printf("\n~~~~~~~");


	getch();
}