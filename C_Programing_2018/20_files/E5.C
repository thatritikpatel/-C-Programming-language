#include <stdio.h>
#include <conio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	clrscr();

	fp1 = fopen("a1.txt","w");

	while((ch=getchar())!='\n'){
		putc(ch,fp1);
	}

	fclose(fp1);

	fp1 = fopen("a1.txt","r");
	fp2 = fopen("a2.txt","w");

	while((ch=getc(fp1))!=EOF){
		putc(ch,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	getch();
}








