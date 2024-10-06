#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp1,*fp2;
	char ch1,ch2;
	clrscr();

	fp1 = fopen("aa1.txt","r");
	fp2 = fopen("aa3.txt","r");

	ch1 = getc(fp1);
	ch2 = getc(fp2);
	while(ch1!=EOF&&ch2!=EOF&&ch1==ch2){
		ch1 = getc(fp1);
		ch2 = getc(fp2);
	}

	if(ch1==ch2){
		printf("Same");
	}else{
		printf("not same");
	}

	getch();
}