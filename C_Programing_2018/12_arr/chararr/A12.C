#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[] = "mohan";
	char y[] = "mohan";
	char z[] = "mihan";

	clrscr();

	//printf("%d",x==y);
	//printf("%d",strcmp(x,y));
	//printf("%d",strcmp(x,z));
	printf("%d",strcmp(z,x));

	getch();
}