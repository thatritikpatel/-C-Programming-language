#include <stdio.h>
#include <conio.h>

void main(){
	char x[5];
	int i,sz;

	clrscr();

	sz = sizeof(x)/sizeof(char);

	x[0] = 'A';
	x[1] = 'm';
	x[2] = 'i';
	x[3] = 't';
	x[4] = '\0';

	for(i=0;i<sz;i++){
		printf("%c",x[i]);
	}

	getch();
}