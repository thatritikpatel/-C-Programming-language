#include <stdio.h>
#include <conio.h>

void main(){
	char x[5];
	int i,sz;

	clrscr();

	sz = sizeof(x)/sizeof(char);

	for(i=0;i<sz;i++){
		printf("%c ",x[i]);
	}

	getch();
}