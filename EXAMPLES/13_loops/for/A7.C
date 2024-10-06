#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,x;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=n-1+65;i>=65;i--){
		printf("\n%c",i);
	}

	/*
	x = 65+n-1;
	for(i=0;i<n;i++){
		printf("\n%c",x-i);
	} */

	/*
	for(i=0;i<n;i++){
		x = 65+n-1-i;
		printf("\n%c",x);
	}*/


	getch();
}