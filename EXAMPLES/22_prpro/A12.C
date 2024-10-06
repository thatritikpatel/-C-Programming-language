#include <stdio.h>
#include <conio.h>

//Case 1:
//#ifndef _CONIO_H
//#define M 23
//#else
//#define M 11
//#endif

//Case 2:
//#define ABC 12
#if !defined(ABC)
#define M 23
#else
#define M 11
#endif

//Case 3:
#ifndef _CONIO_H
#error Some Problem
#else
#define M 11
#endif



void main(){
	clrscr();

	printf("\t%d",M);

	getch();
}


