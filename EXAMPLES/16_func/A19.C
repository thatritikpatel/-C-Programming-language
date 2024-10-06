#include <stdio.h>
#include <conio.h>

int fact(int n){
	if(n==0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("%d",fact(n));

	getch();
}


