#include <stdio.h>
#include <conio.h>

void main(){
	int n,original,r;
	int sum=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);   //for any 3 digit number

	original = n;

	while(n){
		r = n % 10;
		sum = sum + (r * r * r);
		n = n / 10;
	}

	printf("n%s",sum==original?"yes":"no");

	getch();
}








