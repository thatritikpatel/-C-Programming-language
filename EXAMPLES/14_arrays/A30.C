#include <stdio.h>
#include <conio.h>

void main(){
	int x[3][2] = {{12,13},{14,15},{16,17}};
	int y[3][2];

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
			y[i][j] = x[i][sz_cols-j-1];
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