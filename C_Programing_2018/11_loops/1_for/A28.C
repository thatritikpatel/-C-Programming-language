#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n;
	char c = 'A';

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%c ",c++);
		}
		printf("\n");
	}

	getch();
}