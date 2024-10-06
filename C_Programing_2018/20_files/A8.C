#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("d://www.txt","r");

	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}

	printf("#%u#",fp);
	printf("\n~%d~",fp==NULL);

	getch();
}