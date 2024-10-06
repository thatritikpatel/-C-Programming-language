#include <stdio.h>
#include <conio.h>

void main(){
	float x[5] = {2.59,3.74,59.11,74.02,2.13};
	float y[5];

	int size,i,j;

	clrscr();

	size = sizeof(x)/sizeof(float);

	for(i=0;i<size;i++){
		y[i] = x[size-i-1];
	}

	/*
	for(i=size-1,j=0;i>=0;i--,j++){
		y[j] = x[i];
	} */

	for(i=0;i<size;i++){
		printf("%d - %f\n",i,y[i]);
	}


	getch();
}