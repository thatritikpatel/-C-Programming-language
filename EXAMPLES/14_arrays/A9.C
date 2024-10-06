#include <stdio.h>
#include <conio.h>

void main(){
	int x[4],i;

	clrscr();

	for(i=0;i<4;i++){
		printf("%u\n",&x[i]);
	}

	getch();
}