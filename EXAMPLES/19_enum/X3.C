#include <stdio.h>
#include <conio.h>

void main(){
	enum days {MONDAY,TUESDAY=100,WEDNESDAY,THURSDAY=34,FRIDAY,SATURDAY,SUNDAY};

	enum days x = WEDNESDAY;
	int i;
	clrscr();

	printf("\t%d",x);

	getch();
}