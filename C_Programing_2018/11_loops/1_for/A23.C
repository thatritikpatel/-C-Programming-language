#include <stdio.h>
#include <conio.h>

void main(){
	int n,i,j,c=1;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",c++);
		}
		printf("\n");
	}

	getch();
}