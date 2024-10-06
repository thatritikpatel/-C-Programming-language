#include <stdio.h>
#include <conio.h>

void abc(int c){
	if(c){
		c--;
		printf("\n%d",c);
		abc(c);
	}
}

void main(){
	clrscr();

	abc(3);

	getch();
}


