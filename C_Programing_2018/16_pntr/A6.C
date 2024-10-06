#include <stdio.h>
#include <conio.h>

void main(){
	//Case 1:
	/*
	int x;
	int *p;
	x = 56;
	p = &x;
	*/

	//Case 2:
	//int x = 47;
	//int *p = &x;

	//Case 3:
	int x,*p;
	x = 67;
	p = &x;

	//int x=20,*p=&x;

	clrscr();


	printf("%d %d",x,*p);


	getch();
}