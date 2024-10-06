#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {2,3,4};
	int y[3];

	int i,size;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d ",y[i]);
	}

	for(i=0;i<size;i++){
		y[i] = x[i];
	}

	printf("\n$$$$$$$$$$$$$$$$$$\n");

	for(i=0;i<size;i++){
		printf("%d ",y[i]);
	}


	getch();
}