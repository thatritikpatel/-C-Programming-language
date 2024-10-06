#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[] = {'A','B','C','D','\0'};
	char y[] = "amit kumar";

	clrscr();

	printf("%s",x);

	printf("\n%d %d",sizeof(x),strlen(x));
	printf("\n%d %d",sizeof(y),strlen(y));

	getch();
}