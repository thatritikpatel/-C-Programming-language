#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char x[20] = "mohan kumar";
	char y[] = "sohan";

	int i;

	clrscr();

	//x = y; //NOT OK
	printf("%s\n",x);
	strcpy(x,y);
	printf("%s\n",x);

	for(i=0;i<20;i++){
		printf("%c-%d\n",x[i],x[i]);
	}

	getch();
}