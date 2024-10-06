#include <stdio.h>
#include <conio.h>

void main(){
	//int x[12] = {12,34,56,67};
	int x[12];

	int i,size;

	clrscr();

	x[0] = 12;
	x[1] = 56;
	x[2] = 67;
	x[3] = 90;

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d\n",x[i]);
	}

	getch();
}