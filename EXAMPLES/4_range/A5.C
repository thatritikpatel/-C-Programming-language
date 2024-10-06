#include <stdio.h>
#include <conio.h>

void main(){
	int i;
	clrscr();

	for(i=0;i<128;i++){
		printf("%c-%d\t",i,i);
	}

	getch();

	for(i=128;i<256;i++){
		printf("%c-%d\t",i,i);
	}

	/*
	for(i=0;i<256;i++){
		printf("%c",i);
	} */


	getch();
}