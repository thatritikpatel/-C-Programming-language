#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	int n,i,j;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("(i:%d-j:%d) ",i,j);
			delay(700);
		}

		printf("\n");
	}

	getch();
}
