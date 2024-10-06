#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;
	char x;

	clrscr();

	printf("Enter a character: ");
	scanf("%c",&x);

	fflush(stdin);

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n%c",x+i);
	}

	getch();
}