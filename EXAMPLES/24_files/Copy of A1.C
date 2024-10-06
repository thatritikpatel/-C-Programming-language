#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;

	clrscr();

	fp = fopen("sarvesh2.txt","w");
	//open the file with diff. mode.
	//and show that a and w creates fiel if does not exist.
	//and w mode deletes all the text in the specified file if exist.

	fclose(fp);

	getch();
}