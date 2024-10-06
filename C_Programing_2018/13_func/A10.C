#include <stdio.h>
#include <conio.h>

//function prototype(function declaration)
void abc();

void main(){
	clrscr();

	abc();//function call

	getch();
}

//function definition
void abc(){
	printf("\nHello");
}