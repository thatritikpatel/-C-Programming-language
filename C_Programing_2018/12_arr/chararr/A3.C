#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	//char x[12] = "amit";
	//char x[12] = {'A','M','I','T','I'};
	//char x[12];
	int i,size;

	clrscr();
	/*
	x[0] = 'A';
	x[1] = 'M';
	x[2] = 'I';
	x[3] = 'T';
	*/
	printf("%d %d",sizeof(x),strlen(x));

	size = sizeof(x);

	for(i=0;i<12;i++){
		printf("\n%c-%d",x[i],x[i]);
	}

	getch();
}