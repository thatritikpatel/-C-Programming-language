#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int upperHai(int c){
	int flag = 0;

	if(c>=65&&c<=91){
		flag = 1;
	}

	return flag;
}


void main(){
	clrscr();

	//printf("%d",isupper('A'));
	//printf("%d",isupper('a'));
	//printf("%d",isupper(67));

	//printf("%d",upperHai('W'));

	getch();
}












