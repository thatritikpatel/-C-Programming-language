#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	int i,j,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("i=%d, j=%d\t",i,j);
			delay(2000);
		}
		printf("\n");
	}

	getch();
}











