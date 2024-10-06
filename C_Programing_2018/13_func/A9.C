#include <stdio.h>
#include <conio.h>

int firstSum(int x){
	int sum = 0;

	while(x){
		sum += x;
		x--;
	}

	return sum;
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("The Sum of first %d numbers is %d.",n,firstSum(n));

	getch();
}