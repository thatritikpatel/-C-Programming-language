#include <stdio.h>
#include <conio.h>

void main(){
	int i,x[3],size;
	float y[3];

	clrscr();


	size = sizeof(y)/sizeof(float);

	for(i=0;i<size;i++){
		printf("%d ~ %f\n ",i,y[i]);
	}

	//Case 1:
	/*
	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	} */


	getch();
}