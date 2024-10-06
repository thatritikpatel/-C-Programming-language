#include <stdio.h>
#include <conio.h>

enum days {MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY};

void main(){

	enum days x = FATHERSDAY;

	//enum days x = TUESDAY;

	clrscr();

	printf("\t%d",x);

	getch();
}