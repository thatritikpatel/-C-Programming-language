#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {45,12,23,56};
	int half,size,i,j,c;

	clrscr();

	size = sizeof(x)/sizeof(int);
	half = size/2;

	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	for(i=0,j=size-1;i<half;i++,j--){
		//printf("%d-%d ",i,j);
		c = x[i];
		x[i] = x[j];
		x[j] = c;
	}

	printf("\n###########\n");
	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	getch();
}