#include <stdio.h>
#include <conio.h>

void main(){
	//char x[6] = {'R','A','M'};
	//char x[6] = "RAM";
	char x[6];

	clrscr();

	//x = {'R','A','M'}; //NOT OK
	//x = "mohan";     //NOT OK

	printf("%s",x);

	getch();
}