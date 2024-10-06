#include <stdio.h>
#include <conio.h>

void main(){
	int n,i=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(i<n){
		printf("%c ",65+i);
		i++;
	}

	getch();
}