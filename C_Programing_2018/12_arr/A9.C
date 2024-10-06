#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {23,67,78,2,43};
	int i,size;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=size-1;i>=0;i--){
		printf("%d ",x[i]);
	}

	getch();
}