#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <mem.h>

void main(){
	int *b;
	clrscr();

	b = (int*)malloc(sizeof(int)*3);
	memset(b,0,sizeof(int)*3);
	//or
	//b = (int*)calloc(3,sizeof(int));

	printf("%d %d %d",*b,*(b+1),*(b+2));
	*b = 56;
	*(b+1) = 23;
	//printf("\n%d %d %d",*(b+0),*(b+1),*(b+2));
	printf("\n%d %d %d",b[0],b[1],b[2]);

	getch();
}