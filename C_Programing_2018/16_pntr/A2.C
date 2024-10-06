#include <stdio.h>
#include <conio.h>

void main(){
	float y;
	float *q;

	clrscr();

	y = 5.67;
	q = &y;

	printf("%f",y);
	printf("\n%u",&y);
	printf("\n%u",q);
	printf("\n%u",&q);
	printf("\n%f",*q);

	printf("\n--------\n");


	printf("sizeof(y): %d \nsizeof(q): %d",sizeof(y),sizeof(q));

	getch();
}




























