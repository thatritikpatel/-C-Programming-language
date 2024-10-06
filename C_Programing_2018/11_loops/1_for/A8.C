#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;

	clrscr();

	printf("Enter a Number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n%d",i*2);
	}

	getch();
}