#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[20] = "mohan kumar";
	char y[] = "vikas";

	int i = 0;
	char c;

	clrscr();

	while(c=y[i]){
		x[i]=c;
		i++;
	}
	x[i] = '\0';

	printf("%s",x);

	getch();
}