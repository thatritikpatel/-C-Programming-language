#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char *s;

	int x = 0;

	clrscr();

	printf("\t");

	fp = fopen("file.txt","w");

	fputs("Mohan is a good boy .... end",fp);

	fclose(fp);

	fp = fopen("file.txt","r");

	//printf("\n%c",getc(fp));
	//printf("%c",getc(fp));
	//printf("\n%ld",ftell(fp));

	//fseek(fp,-1,SEEK_CUR);
	//printf("%ld",ftell(fp));
	//x = ftell(fp);
	//printf("%d",x);
	//rewind(fp);
	//printf("%ld",ftell(fp));
	fgets(s,6,fp);
	printf("%s",s);



	getch();
}