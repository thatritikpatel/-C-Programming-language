#include <stdio.h>
#include <conio.h>

int sumOf(int x){
	if(x==0){
		return 0;
	}

	return sumOf(x-1)+x;
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("\nSum of first %d numbers is %d!",n,sumOf(n));

	getch();
}






