#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[12] = "mohan kumar";

	int i = 0;

	clrscr();

	while(x[i++]);
	i--;

	printf("The length is: %d",i);

	getch();
}