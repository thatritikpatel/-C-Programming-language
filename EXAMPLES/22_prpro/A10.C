#include <stdio.h>
#include <conio.h>

//Case 1:
//#ifndef BLINK
//#define BLINK 2312
//#endif


//Case 2:

#ifndef BLINK
#define A 2312
#else
#define A 2222
#endif


void main(){
	clrscr();


	//Case 1:
	//printf("%d",BLINK);

	//Case 2:
	printf("%d",A);

	getch();
}









