#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen(__FILE__,"r");

	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}

	getch();
}