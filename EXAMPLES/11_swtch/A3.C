#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Press 1 for Hindi, 2 for English and 3 for Tamil: ");
	scanf("%d",&y);

	if(y==1)
		printf("Hindi");
	else if(y==2)
		printf("English");
	else if(y==3)
		printf("Tamil");
	else
		printf("Invalid INput");




	getch();
}