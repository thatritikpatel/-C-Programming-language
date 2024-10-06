#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,k,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			printf("  ");
		}

		for(k=0;k<i;k++){
			printf("* ");
		}

		printf("\n");
	}

	getch();
}








