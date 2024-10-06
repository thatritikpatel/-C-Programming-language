#include <stdio.h>
#include <conio.h>

#define P printf
#define START  void main(){
#define END  }
#define WAIT getch();
#define CLR clrscr();
#define LT <
#define EQL ==
#define OR ||
#define NL printf("\n");

START
	int a = 2, b = 3;
	CLR

	P("%d",2+3);

	NL

	if(a LT b OR a EQL 0){
		P("a is less than b");
	}

	WAIT
END







