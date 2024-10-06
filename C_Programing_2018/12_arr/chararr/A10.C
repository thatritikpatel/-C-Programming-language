#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[30] = "mohan";
	char y[] = "kumar";

	clrscr();

	//printf("%s",x+y);

	printf("%s\n",x);

	strcat(x,y);

	printf("\n%s",x);

	getch();
}