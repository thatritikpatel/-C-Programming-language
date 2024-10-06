#include <stdio.h>
#include <conio.h>

void main(){
	int x[3] = {12,13,14};
	int y[3];
	int size,i;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		//printf("%d ",x[i]);
		y[i] = x[i];
	}

	for(i=0;i<size;i++){
		printf("%d ",y[i]);
	}


	getch();
}