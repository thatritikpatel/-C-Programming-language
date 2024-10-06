#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,k=1;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("%d ",k++);
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











