#include <stdio.h>
#include <conio.h>

void abc(int c){
	printf("\n%d",c);

	if(c){
		c--;
		abc(c);
	}
}

void main(){
	clrscr();

	abc(3);

	getch();
}


