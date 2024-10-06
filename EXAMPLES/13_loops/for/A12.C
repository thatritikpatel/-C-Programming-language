#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,c=1;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c++);
		}
		printf("\n");
	}

	getch();
}











