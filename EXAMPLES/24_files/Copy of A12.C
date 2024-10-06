#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("file.txt","a");

	putc('A',fp);
	printf("\n--%d--",ferror(fp));

	fclose(fp);
	fp = fopen("file.txt","r");

	ch = getc(fp);

	printf("\n--%d--",ferror(fp));

	getch();
}
