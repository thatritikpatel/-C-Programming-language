#include <stdio.h>
#include <conio.h>

void main(){
	int x[2][3] = {{3,6,7},{12,9,5}};
	int y[2][3];
	int i,j;

	int rows, cols;

	clrscr();

	rows = sizeof(y)/sizeof(y[0]);
	cols = sizeof(y[0])/sizeof(int);

	//printf("row_count: %d \n col_count: %d",rows,cols);

	for(i=0;i<rows;i++){
		//printf("%d-%u ",i,x[i]);
		for(j=0;j<cols;j++){
			//printf("i:%d-j:%d\t\t",i,j);
			//printf("x[%d][%d]\t\t",i,j);
			printf("%d\t\t",y[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			y[i][j] = x[rows-i-1][j];
		}
	}

	printf("\n######################\n");

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t\t",y[i][j]);
		}
		printf("\n");
	}


	getch();
}








