#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	char x[30] = "1234";
	char y;

	int i = 1;

	int count = 20;

	clrscr();

	while(count--){

		y = x[0];

		while(x[i-1]=x[i]){
			i++;
		}

		x[i-1] = y;
		x[i] = '\0';

		i = 1;
		delay(500);

		clrscr();
		printf("\n\n%s",x);
	}

	getch();
}










