#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,c;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	c = n*(n+1)/2;

	for(i=1;i<=n;i++){
		for(j=0;j<=n-i;j++){
			printf("%d ",c--);
		}
		printf("\n");
	}

	getch();
}