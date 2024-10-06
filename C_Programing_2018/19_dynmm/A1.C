#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
	int *b;
	clrscr();

	b = (int*)malloc(sizeof(int));
	printf("\t%d",*b);
	*b = 23;
	printf("\n\t%d",*b);

	getch();
}