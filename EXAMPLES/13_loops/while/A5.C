#include <stdio.h>
#include <conio.h>

void main(){
	int n,i=0,j=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(i<n){
		j=0;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}


	getch();
}