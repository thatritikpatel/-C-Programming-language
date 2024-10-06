#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[] = "mohan";
	char y[] = "sohan";
	char z[] = "mohan";

	int i;

	clrscr();

	//printf("%d",x==z);
	//printf("%d",x==y);
	//printf("%d",x==x);
	//printf("%d",strcmp(x,y));
	//printf("%d",strcmp(y,x));
	printf("%d",strcmp(x,z));

	getch();
}