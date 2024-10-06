#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,s;

	clrscr();

	printf("Enter start number: ");
	scanf("%d",&s);

	fflush(stdin);

	printf("Enter a number: ");
	scanf("%d",&n);


	for(i=0;i<n;i++){
		printf("\n%d",s++);
	}


	/*
	for(i=0;i<n;i++){
		printf("\n%d",s+i);
	}*/

	/*
	for(i=s;i<n+s;i++){
		printf("\n%d",i);
	}*/

	getch();
}