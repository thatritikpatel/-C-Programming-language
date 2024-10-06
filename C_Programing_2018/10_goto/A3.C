#include <stdio.h>
#include <conio.h>

void main(){
	int count;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&count);

	printf("\n~~~1");

	abc:

	printf("\n~~~2");

	if(count){
		count--;
		goto abc;
	}

	printf("\n~~~3");

	getch();
}