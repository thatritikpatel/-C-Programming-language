#include <stdio.h>
#include <conio.h>

void main(){
	int x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	if(x<12){
		printf("\n%d is less than 12",x);
	}

	printf("\nRemaining code");


	getch();
}