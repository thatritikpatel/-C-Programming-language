#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp1,*fp2;
	char ch;
	clrscr();

	fp1 = fopen("abc.txt","w");
	fp2 = fopen("mno.txt","w");

	while((ch=getchar())!='\n'){
		putc(ch,fp1);
	}

	fclose(fp1);

	fp1 = fopen("abc.txt","r");

	while((ch=getc(fp1))!=EOF){
		putc(ch,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	getch();
}



