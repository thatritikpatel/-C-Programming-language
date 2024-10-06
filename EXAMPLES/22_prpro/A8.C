#include <stdio.h>
#include <conio.h>

#define A 1
#define B (A+1)
#define SQUARE(x) ((x) * (x))
#define CUBE(x)  (SQUARE(x) * (x))
#define HALF(x) (x/2.0)
#define X(x)  HALF(HALF(x))
#undef _IOFBF
#define _IOFBF 23
#undef EOF
#define EOF 100

void main(){
	clrscr();
	printf("\t");

	//printf("%d",B);
	//printf("%d",CUBE(B));
	//printf("%f",X(8));
	//printf("%d",_IOFBF);
	printf("%d",EOF);

	getch();
}








