#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			printf("*");
		}
		printf("\n");
	}

	getch();
}











