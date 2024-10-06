#include <stdio.h>
#include <conio.h>

void abc(int x){
	printf("%d\t",x);
	if(x){
		abc(x-1);
	}
}

void main(){
	clrscr();

	abc(3);

	getch();
}


