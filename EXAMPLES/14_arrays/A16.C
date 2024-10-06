#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {12,13,14,15};
	int size,i,j;

	clrscr();

	size = sizeof(x)/sizeof(int);
	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}

	getch();
}