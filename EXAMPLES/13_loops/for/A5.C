#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	//Case 1:
	/*
	for(i=n;i>=0;i--){
		printf("\n%d",i);
	}*/

	//Case 2:
	/*
	for(i=n;i>-1;i--){
		printf("\n%d",i);
	}*/

	getch();
}