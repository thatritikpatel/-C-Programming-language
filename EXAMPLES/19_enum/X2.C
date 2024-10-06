#include <stdio.h>
#include <conio.h>

enum days {MONDAY=1,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY};

void main(){
	enum days x = SUNDAY;
	enum days y;
	clrscr();

	printf("Enter Day Number(1:MON - 7-SUN): ");
	scanf("%d",&y);

	if(y==x)
		printf("\tHello");
	else
		printf("\tBye");

	getch();
}