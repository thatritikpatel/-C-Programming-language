#include <stdio.h>
#include <conio.h>

void main(){
	int y = 78;
	int z;

	clrscr();

	//z = 12 + y++;
	z = 12 + ++y;

	printf("z:%d - y:%d",z,y);


	getch();
}