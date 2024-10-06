#include <stdio.h>
#include <conio.h>

int process(int,int);

void main(){
	int x;

	clrscr();

	x = process(12,13);
	printf("%d",x);

	getch();
}

int process(int a,int b){
	return a+b;
}








