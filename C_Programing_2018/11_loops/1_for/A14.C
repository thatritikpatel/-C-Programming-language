#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,s=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		s = s + i;
	}

	printf("The sum of first %d numbers: %d",n,s);

	getch();
}