#include <stdio.h>
#include <conio.h>

void main(){
	int w=12,*p=&w,v=15,*q=&v;
	clrscr();

	printf("%u %d",p,w);
	printf("\n%u %d",q,v);

	printf("\n##############\n");

	//printf("%u",p+q);
	//printf("%u",p*q);
	//printf("%u",p/q);

	//printf("%u",p-q);
	//printf("%d",*p * *q);
	//printf("\n%d",*p - *q);
	//printf("\n%d",*p + *q);
	printf("\n%f",(float)*p / *q);


	getch();
}