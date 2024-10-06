#include <stdio.h>
#include <conio.h>

int add(int a,int b){
	int sum = 0 ;

	sum = a + b;

	return sum;
}

void main(){
	int x,y;

	clrscr();

	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);

	printf("\n%d+%d is %d",x,y,add(x,y));

	getch();
}