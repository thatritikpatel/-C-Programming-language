#include <stdio.h>
#include <conio.h>

void main(){
	float x[4];
	int i;

	clrscr();

	for(i=0;i<4;i++){
		printf("%u\n",&x[i]);
	}

	getch();
}