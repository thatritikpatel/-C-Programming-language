#include <stdio.h>
#include <conio.h>

int fact(int n){
	int result = 1;

	while(n){
		result *= n;
		n--;
	}

	return result;
}

void main(){
	int x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&x);

	printf("factorial of %d is %d",x,fact(x));

	getch();
}












