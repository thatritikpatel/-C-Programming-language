#include <stdio.h>
#include <conio.h>

void prinStar(int n){
	if(n!=1){
		prinStar(n-1);
	}
	printf("*");
}

void newLine(int n){
	prinStar(n);
	printf("\n");

	if(n!=1){
		newLine(n-1);
	}
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	newLine(n);

	getch();
}