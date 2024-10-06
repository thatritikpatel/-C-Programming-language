#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n%c - %d",65+i,65+i);
	}

	getch();
}