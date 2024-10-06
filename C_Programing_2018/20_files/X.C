#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main(){
	int *p;
	clrscr();

	p = (int*)malloc(sizeof(int)*2);
	*p = 23;
	*(p+1) = 34;

	printf("%d %d",*p,*(p+1));




	getch();
}