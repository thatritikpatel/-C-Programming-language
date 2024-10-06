#include <stdio.h>
#include <conio.h>
void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("abc.txt","r");

	//printf("%c",fgetc(fp));

	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}

	fclose(fp);

	getch();
}