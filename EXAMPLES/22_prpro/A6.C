#include <stdio.h>
#include <conio.h>

//Case 1:
//#define SQUARE(x) (x * x)

//Case 2:
#define MAX(x,y) x>y?x:y

void main(){
	int a,b;
	clrscr();

	//printf("\t");

	//Case 1:
	//scanf("%d",&a);
	//printf("\t%d",SQUARE(a));

	//Case 2:
	scanf("%d%d",&a,&b);
	printf("\t%d",MAX(a,b));


	getch();
}














