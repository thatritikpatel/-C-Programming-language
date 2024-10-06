#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n%c",'a'+i);
	}

	/*
	for(i='a';i<'a'+n;i++){
		printf("\n%c",i);
	}*/

	getch();
}