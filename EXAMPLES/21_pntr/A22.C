#include <stdio.h>
#include <conio.h>

void main(){
	int x=10,*p=&x;
	int **q=&p;
	int ***r=&q;

	clrscr();

	printf("x: %d",x);
	printf("\nx: %d",*p);
	printf("\nx: %d",**q);
	printf("\nx: %d",***r);

	getch();
}