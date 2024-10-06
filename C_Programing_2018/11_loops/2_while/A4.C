#include <stdio.h>
#include <conio.h>

void main(){
	int n,original;
	int sum=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	original = n;

	while(n){
		sum = (sum*10) + (n%10);
		//printf("%d ",sum);
		n = n / 10;
	}

	printf("\n%s",sum==original?"yes":"no");

	getch();
}








