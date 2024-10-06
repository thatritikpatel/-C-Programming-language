#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("a1.txt","w");

	fputs("raghav is a good boy.....!!",fp);

	fclose(fp);

	fp = fopen("a1.txt","r");
	//printf("\t%ld",ftell(fp));
	//printf("\t%c%c\n",getc(fp),getc(fp));
	//printf("\t%ld",ftell(fp));

	//fseek(fp,-23,SEEK_END);
	//fseek(fp,5,SEEK_CUR);
	//fseek(fp,5,0);

	//printf("\t%c",getc(fp));

	printf("\t%c - %ld",getc(fp),ftell(fp));
	printf("\t%ld",ftell(fp));

	rewind(fp);

	printf("\n\n~%c~",getc(fp));

	getch();
}