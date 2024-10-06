#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("#- ");
		}
		printf("\n");
	}

	/*
	for(i=n;i>0;i--){
		for(j=0;j<i;j++){
			printf("# ");
		}
		printf("\n");
	}*/

	getch();
}