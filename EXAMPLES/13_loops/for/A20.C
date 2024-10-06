#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	int i,j,n;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}



	getch();
}











