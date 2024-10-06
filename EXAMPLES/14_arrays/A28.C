#include <stdio.h>
#include <conio.h>

void main(){
	int x[3][2] = {{12,13},{14,15},{16,17}};
	int i,j,sz_rows,sz_cols;

	clrscr();

	sz_rows = sizeof(x)/sizeof(x[0]);
	sz_cols = sizeof(x[0])/sizeof(int);

	printf("addr-of-x:%u\n",x);
	printf("addr-of-x:%u",&x);

	for(i=0;i<sz_rows;i++){
		printf("\n\n(row_index)i:%d  -  addr-of-x[%d]:%u addr-of-x[%d]:%u\n########################################\n",i,i,x[i],i,&x[i]);
		for(j=0;j<sz_cols;j++){
			printf("(col_index)j:%d  -  x[%d][%d]:%d  -  addr-of-x[%d][%d]:%u\n",j,i,j,x[i][j],i,j,&x[i][j]);
		}
	}


	getch();
}



