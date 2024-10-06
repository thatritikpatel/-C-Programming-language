#include <stdio.h>
#include <conio.h>

void main(){
	int x[4][4] = {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
	int y[4][4];

	int i,j,sz_rows,sz_cols;

	clrscr();

	sz_rows = sizeof(x)/sizeof(x[0]);
	sz_cols = sizeof(x[0])/sizeof(int);


	for(i=0;i<sz_rows;i++){
		for(j=0;j<sz_cols;j++){
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<sz_rows;i++){
		for(j=0;j<sz_cols;j++){
			y[i][j] = x[sz_rows-i-1][sz_cols-j-1];
		}
	}
	printf("\n#################################\n");

	for(i=0;i<sz_rows;i++){
		for(j=0;j<sz_cols;j++){
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}


	getch();
}