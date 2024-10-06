#include <stdio.h>
#include <conio.h>

void main(){
	int x[3] = {12,13,14};
	int i;

	clrscr();

	for(i=0;i<3;i++){
		printf("-%d-\n",x[i]);
	}

	getch();
}