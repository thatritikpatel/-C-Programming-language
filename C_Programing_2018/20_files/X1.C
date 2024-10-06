#include <stdio.h>
#include <conio.h>

void main(){
	FILE *a,*b;
	char ch;
	clrscr();

	a = fopen("ttt.txt","r");
	b = fopen("yyy.txt","w");

	do{
		ch = getc(a);
		if(ch!=EOF){
			putc(ch,b);
		}
	}while(ch!=EOF);

	fclose(a);
	fclose(b);

	getch();
}



