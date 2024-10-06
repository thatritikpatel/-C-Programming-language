#include <stdio.h>
#include <conio.h>

void main(){
	char c;
	char *r;

	clrscr();

	c = 'W';
	r = &c;

	printf("%c",c);
	printf("\n%u",&c);
	printf("\n%u",r);
	printf("\n%u",&r);
	printf("\n%c",*r);

	printf("\n--------\n");


	printf("sizeof(c): %d \nsizeof(r): %d",sizeof(c),sizeof(r));

	getch();
}