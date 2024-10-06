#include <stdio.h>
#include <conio.h>

void main(){
	int n,i;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	i = 0;

	while(i<n){
		printf("%d ",i);
		i++;
	}

	getch();
}