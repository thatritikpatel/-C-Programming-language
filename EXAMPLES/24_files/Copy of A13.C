#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main(){
	FILE *fp1,*fp2,*fp3;
	char ch;
	clrscr();

	fp1 = fopen("aa1.txt","w");
	fp2 = fopen("aa2.txt","w");
	fp3 = fopen("aa3.txt","w");

	fputs("Raghav is a good player.... ",fp1);

	fclose(fp1);

	fp1 = fopen("aa1.txt","r");

	while((ch=getc(fp1))!=EOF){
		putc(ch,fp3);
		putc(toupper(ch),fp2);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	//Dont close fp3 and test

	getch();
}