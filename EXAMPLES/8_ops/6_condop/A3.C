#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	//Case 1
	//y = printf("ganesh")?printf("mohan"):printf("ram");

	//Case 2:
	y = printf("")?printf("mohan"):printf("ram");


	printf("%d",y);

	getch();
}