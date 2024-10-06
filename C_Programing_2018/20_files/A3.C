#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("indexy.txt","r");

	//printf("%d",EOF);

	//Case 2:

	if(fp!=NULL){
		while((ch=getc(fp))!=EOF){
			printf("%c",ch);
		}
	}else{
		printf("File doesn't exist");
	}

	//Case 1:
	/*
	ch = getc(fp);
	printf("\t%c",ch);
	printf("%c",getc(fp));
	*/

	fclose(fp);

	getch();
}