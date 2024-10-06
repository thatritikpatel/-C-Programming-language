#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;
	char x;

	clrscr();

	printf("Enter a start character(Upper Case): ");
	scanf("%c",&x);

	fflush(stdin);

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n%c",x+i+32);
	}


	getch();
}











