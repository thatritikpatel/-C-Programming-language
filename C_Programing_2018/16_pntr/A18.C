#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {45,12,89,2},*p=x,sz,i;
	clrscr();

	sz = sizeof(x)/sizeof(int);
	//printf("\t%d",sz);

	/*
	for(i=0;i<sz;i++){
		//printf("\t%d",*p++);
		//printf("\t%u",*(p+i));
	}
	printf("\n\t%d",*p);
	*/


	printf("\t%d",*p);
	p++;
	printf("\t%d",*p);


	getch();
}