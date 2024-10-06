#include <stdio.h>
#include <conio.h>

void main(){
	int x;
	int *p;

	clrscr();

	x = 40;
	p = &x;

	printf("%d",x);
	printf("\n%u",&x);
	printf("\n%u",p);
	printf("\n%u",&p);
	printf("\n%d",*p);

	printf("\n--------\n");


	printf("sizeof(x): %d \nsizeof(p): %d",sizeof(x),sizeof(p));

	getch();
}









