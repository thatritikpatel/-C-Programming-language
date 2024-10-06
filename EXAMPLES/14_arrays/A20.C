#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {23,56,12,6};
	int c,i,s,j;

	clrscr();

	s = sizeof(x)/sizeof(int);


	for(i=0;i<s/2;i++){
		c = x[i];
		x[i] = x[s-i-1];
		x[s-i-1] = c;
	}

	/*
	for(i=0,j=s-1;i<s/2;i++,j--){
		c = x[i];
		x[i] = x[j];
		x[j] = c;
	} */

	for(i=0;i<s;i++){
		printf("%d ",x[i]);
	}

	getch();
}