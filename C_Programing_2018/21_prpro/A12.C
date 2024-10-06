#include <stdio.h>
#include <conio.h>


//#ifndef _CONIO_H
//or
//#define ABC 12
#if !defined(ABC)
//#define M 23
//#error Some Problem
#else
#define M 11
#endif

void main(){
	clrscr();

	printf("\t%d",M);

	getch();
}


