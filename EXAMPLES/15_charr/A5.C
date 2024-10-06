#include <stdio.h>
#include <conio.h>

void main(){
	char x[6];
	int i,sz;

	clrscr();

	printf("Enter your name: ");
	scanf("%s",x);

	sz = sizeof(x)/sizeof(char);

	for(i=0;i<sz;i++){
		printf("%c",x[i]);
	}

	getch();
}