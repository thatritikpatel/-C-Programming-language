#include <stdio.h>
#include <conio.h>

void abc(int *y){
	printf("\n\t%d",*y);
	*y = 76;
}

void main(){
	int a,*p=&a;
	clrscr();

	printf("\tEnter value: ");
	scanf("%d",&a);

	printf("\t%d",a);

	abc(p);

	printf("\n\t%d",a);

	getch();
}






