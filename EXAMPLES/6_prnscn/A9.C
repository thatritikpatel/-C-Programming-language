#include <stdio.h>
#include <conio.h>

void main(){
	int r;
	float q;
	char e;

	clrscr();

	printf("Please enter one integer, one float and one character input: ");

	//Case 2:
	scanf("%d",&r);
	fflush(stdin);
	scanf("%f",&q);
	fflush(stdin);
	scanf("%c",&e);
	fflush(stdin);

	//Case 1:
	//scanf("%d%f%c",&r,&q,&e);


	printf("\n\n%d %f %c",r,q,e);

	getch();
}