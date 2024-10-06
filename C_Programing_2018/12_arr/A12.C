#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {1,2,3,4,5};
	int half,size,i,c;

	clrscr();

	size = sizeof(x)/sizeof(int);
	half = size/2;

	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	for(i=0;i<half;i++){
		//printf("%d-%d ",i,j);
		c = x[i];
		x[i] = x[size-i-1];
		x[size-i-1] = c;
	}

	printf("\n###########\n");
	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	getch();
}