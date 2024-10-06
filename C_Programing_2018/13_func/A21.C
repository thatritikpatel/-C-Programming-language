#include <stdio.h>
#include <conio.h>

int fact(int x){
	if(x==0){
		return 1;
	}

	return fact(x-1)*x;
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("\nfactorial of %d is %d!",n,fact(n));

	getch();
}






