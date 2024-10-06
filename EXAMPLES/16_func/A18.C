#include <stdio.h>
#include <conio.h>

void printStar(int n){
	if(n){
		printf("*");
		printStar(n-1);
	}
}

void printRow(int n){
	if(n){
		printRow(n-1);
		printStar(n);
		printf("\n");
	}
}

void main(){
	int n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printRow(n);

	getch();
}


