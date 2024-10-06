#include <stdio.h>
#include <conio.h>

void main(){
	//unsigned int p;
	int *p;
	int y = 20;

	clrscr();

	p = &y;
	printf("\t%u",p);
	//printf("\t%d",*p);
	p++;
	printf("\t%u",p);


	getch();
}