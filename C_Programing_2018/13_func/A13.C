#include <stdio.h>
#include <conio.h>

int addition(int,int);

void main(){
	int x,y;
	clrscr();

	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);

	printf("\n%d + %d is %d",x,y,addition(x,y));

	getch();
}

int addition(int a,int b){
	int sum = 0;

	sum = a + b;

	return sum;
}






