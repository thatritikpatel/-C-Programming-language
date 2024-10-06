#include <stdio.h>
#include <conio.h>

void main(){
	enum days {MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY};

	enum days x = THURSDAY;
	int i;
	clrscr();

	printf("\t%d",x);

	getch();
}