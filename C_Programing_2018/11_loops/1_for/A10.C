#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,c;

	clrscr();

	printf("Enter start number: ");
	scanf("%d",&n);

	fflush(stdin);

	printf("Enter count: ");
	scanf("%d",&c);

	for(i=0;i<c;i++){
		printf("\n%d",n);
		n = n + 1;
	}

	getch();
}