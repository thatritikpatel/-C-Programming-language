#include <stdio.h>
#include <conio.h>

int add(int a,int b){
	int sum = 0;

	sum = a + b;

	return sum;
}


void main(){
	int x,y,z;

	clrscr();

	printf("Enter first number: ");
	scanf("%d",&x);

	fflush(stdin);

	printf("Enter another number: ");
	scanf("%d",&y);

	z = add(x,y);

	printf("%d + %d = %d",x,y,z);

	getch();
}


