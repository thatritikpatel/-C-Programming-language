#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[20] = "mohan kumar";
	char y[] = "vikas";

	int i=0,j=0;
	char c;

	clrscr();

	while(x[i++]);

	i--;

	while(c=y[j]){
		x[i] = c;
		i++;
		j++;
	}

	x[i] = '\0';

	printf("%s",x);

	getch();
}
