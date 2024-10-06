#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,k=65;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("%c ",k);
			k = k + 2;
		}
		printf("\n");
	}


	getch();
}



/*
for(i=;i;i){
		for(j=;j;j){
			printf("%d ",?);
		}
		printf("\n");
	}

*/











