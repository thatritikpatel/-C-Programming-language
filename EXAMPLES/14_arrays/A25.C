#include <stdio.h>
#include <conio.h>

void main(){
	int x[2][3];

	int i,j,size_r,size_c;

	clrscr();

	size_r = sizeof(x)/sizeof(x[0]);
	size_c = sizeof(x[0])/sizeof(int);


	//printf("row size: %d \ncolumn size: %d",size_r,size_c);
	//Case 3:
	for(i=0;i<size_r;i++){
		for(j=0;j<size_c;j++){
			printf("%u ",&x[i][j]);
		}
		printf("\n");
	}

	//Case 2:
	/*
	for(i=0;i<size_r;i++){
		for(j=0;j<size_c;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<size_r;i++){
		for(j=0;j<size_c;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	} */

	//Case 1:
	/*
	for(i=0;i<size_r;i++){
		//printf("%d ",i);
		//printf("%u ",x[i]);
	} */


	getch();
}



