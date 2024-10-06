#include <stdio.h>
#include <conio.h>

void main(){
	double c;
	double *r;

	clrscr();

	c = 45.56;
	r = &c;

	printf("%lf",c);
	printf("\n%u",&c);
	printf("\n%u",r);
	printf("\n%u",&r);
	printf("\n%lf",*r);

	printf("\n--------\n");


	printf("sizeof(c): %d \nsizeof(r): %d",sizeof(c),sizeof(r));

	getch();
}
