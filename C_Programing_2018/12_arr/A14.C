#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {10,20,30,40,50};
	int size,i;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	for(i=0;i<size/2;i++){
		x[size-i-1] = x[size-i-1]+x[i];
		x[i] = x[size-i-1]-x[i];
		x[size-i-1] = x[size-i-1]-x[i];
	}

	printf("\n###########\n");
	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	getch();
}