#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <mem.h>
void main(){
	int *b;
	clrscr();

	b = (int*)malloc(sizeof(int)*3);
	*(b+0) = 23;
	*(b+1) = 45;
	*(b+2) = 89;
	printf("\n\n%d %d %d %u",b[0],b[1],b[2],b);

	b = NULL;

	b = (int*)realloc(b,sizeof(int)*4);
	*(b+3) = 102;

	printf("\n\n%d %d %d %d %u",b[0],b[1],b[2],b[3],b);
	//printf("\n\n%d %d %u",b[0],b[1],b);

	getch();
}




