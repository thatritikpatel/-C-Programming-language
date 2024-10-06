#include <stdio.h>
#include <conio.h>

void prinStar(int n){
	if(n!=1){
		prinStar(n-1);
	}
	printf("*");
}

void newLine(int n){
	if(n!=1){
		newLine(n-1);
	}

	prinStar(n);
	printf("\n");
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	newLine(n);

	getch();
}