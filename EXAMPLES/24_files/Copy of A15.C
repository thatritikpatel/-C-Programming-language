#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char c;
	clrscr();

	fp = fopen(__FILE__,"r");

	while((c=getc(fp))!=EOF){
		printf("%c",c);
	}

	getch();
}