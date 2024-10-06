#include <stdio.h>
#include <conio.h>

void main(){
	//int x[2][3] = {{1,2,3},{4,5,6}};
	//int x[2][3] = {10,20,30,40,50,60};
	//int x[3][2] = {10,20,30,40,50,60};
	//int x[3][2] = {{1,2,3},{4,5,6}};
	//int x[2][3] = {{1,2},{4,5}};
	//int x[2][3] = {{0},{0}};
	//int x[2][3] = {0};
	//int x[2][3] = {-1};

	int i,j,size_r,size_c;

	clrscr();

	size_r = sizeof(x)/sizeof(x[0]);
	size_c = sizeof(x[0])/sizeof(x[0][0]);

	for(i=0;i<size_r;i++){
		for(j=0;j<size_c;j++){
			printf("%f ",x[i][j]);
		}
		printf("\n");
	}


	getch();
}



