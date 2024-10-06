#include <stdio.h>
#include <conio.h>

void main(){
	//Case 1:
	//int x[2][3] = {{34,35,36},{44,45,46}};

	//Case 2:
	//int x[3][2] = {1,2,3,4,5,6};

	//Case 3:
	//int x[2][3] = {1,2,3,4,5,6};

	int i,j;
	int rows,cols;

	clrscr();

	rows = sizeof(x)/sizeof(x[0]);
	cols = sizeof(x[0])/sizeof(int);


	for(i=0;i<rows;i++){
		//printf("\n%d %u %d",i,x[i],sizeof(x[i]));
		for(j=0;j<cols;j++){
			printf("%d-%d(%d) ",i,j,x[i][j]);
		}
		printf("\n");
	}

	getch();
}










