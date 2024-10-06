#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,g,c;

	clrscr();

	printf("Enter start number: ");
	scanf("%d",&n);

	fflush(stdin);

	printf("Enter count: ");
	scanf("%d",&c);

	fflush(stdin);

	printf("Enter gap: ");
	scanf("%d",&g);

	for(i=0;i<c;i++){
		printf("\n%d",n);
		n = n + g;
	}

	getch();
}