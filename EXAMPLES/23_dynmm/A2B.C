#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <mem.h>
void main(){
	int *b,*c;
	clrscr();

	b = (int*)calloc(3,sizeof(int));
	*(b+0) = 23;
	*(b+1) = 45;
	*(b+2) = 89;
	printf("\n\n%d %d %d %u",b[0],b[1],b[2],b);

	c = b;

	printf("\n\n%d %d %d %u",c[0],c[1],c[2],c);

	b = (int*)realloc(b,sizeof(int)*4);
	*(b+3) = 334;
	printf("\n\n%d %d %d %d %u",b[0],b[1],b[2],b[3],b);

	//free(c);
	printf("\n\n%d %d %d %u",*(c+0),*(c+1),*(c+2),c);


	getch();
}