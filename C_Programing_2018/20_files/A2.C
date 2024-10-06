#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;

	clrscr();

	fp = fopen("indexy.txt","a");

	//Case 2:

	while((ch = getchar())!='\n'){
		putc(ch,fp);
	}

	//Case 1:
	/*
	putc('A',fp);
	putc('B',fp);
	putc(68,fp);
	*/

	fclose(fp);

	getch();
}