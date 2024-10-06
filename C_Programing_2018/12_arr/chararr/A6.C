#include <stdio.h>
#include <conio.h>

void main(){
	char x[17];
	char ch;
	int i=0;

	clrscr();
	/*
	while((ch=getch())!='\r'){
		printf("*");
	}*/

	//while((ch=getch())!='\r');

	while((ch=getch())!='\r'){
		x[i] = ch;
		i++;
	}
	x[i] = '\0';

	printf("\n\n%s",x);

	getch();
}