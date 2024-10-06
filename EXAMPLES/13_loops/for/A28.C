#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,n,k=65;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<i){
				printf(" ");
			}else{
				printf("* ");
			}
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











