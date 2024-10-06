#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[30] = "mohan ji";
	char y[] = "kum";
	int i,size;

	clrscr();

	printf("%s\n",x);

	strcpy(x,y);

	//printf("\n%s",x);

	size = sizeof(x);
	for(i=0;i<size;i++){
		printf("%c",x[i]);
	}

	getch();
}