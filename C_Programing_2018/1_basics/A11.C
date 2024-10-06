#include <stdio.h>
#include <conio.h>

void main(){
	int i;
	clrscr();


	for(i=-128;i<0;i++){
		printf("%d-%c\t",i,i);
	}
	/*
	for(i=0;i<128;i++){
		printf("%d-'%c'\t",i,i);
	} */

	getch();
}