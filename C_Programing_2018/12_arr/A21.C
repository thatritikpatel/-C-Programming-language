#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {56,67,78};
	int y[3];

	int i,size;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d ",y[i]);
	}

	for(i=0;i<size;i++){
		y[i] = x[size-i-1];
	}

	printf("\n$$$$$$$$$$$$$$$$$$\n");

	for(i=0;i<size;i++){
		printf("%d ",y[i]);
	}


	getch();
}