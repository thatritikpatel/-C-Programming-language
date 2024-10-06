#include <stdio.h>
#include <conio.h>

#define SUM(xy)  printf(#xy " : %d\n",xy);

//Case 2:
//#define AAA 12
//#undef AAA
/*
#ifndef AAA
#error some error
#endif*/

void main(){
	int a=1,b=3;
	int r=3,j=5;
	clrscr();
	printf("\t");
	SUM(a+b)
	//printf("a+b  : %d\n",a+b);
	SUM(r+j)

	getch();
}