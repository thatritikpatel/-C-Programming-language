#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;

	clrscr();

	printf("Enter a Number: ");
	scanf("%d",&n);

	for(i=1;i<=10;i++){
		printf("\n%d",i*n);
	}

	getch();
}