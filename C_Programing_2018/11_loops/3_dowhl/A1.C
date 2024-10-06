#include <stdio.h>
#include <conio.h>

void main(){
	int i,n;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("~~~~~~\n");
	i = 0;
	do{
		printf("######\n");
		i++;
	}while(i<n);

	printf("~~~~~~");

	getch();
}