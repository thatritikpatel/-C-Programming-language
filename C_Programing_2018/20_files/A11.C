#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("file.txt","w");

	fputs("Mohan is a good boy .... end",fp);

	fclose(fp);

	fp = fopen("file.txt","r");

	while((ch=getc(fp))!=EOF){
		printf("\t%c - %d\n",ch,feof(fp));
	}

	printf("\n--%d--",feof(fp));

	getch();
}










