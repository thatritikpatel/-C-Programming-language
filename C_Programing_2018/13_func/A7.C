#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int isnum(int c){
	int flag = 0;

	if(c>='0'&&c<='9'){
		flag = 1;
	}

	return flag;
}


void main(){
	clrscr();

	//printf("%d",isdigit('7'));


	printf("%d",isnum('7'));



	getch();
}












