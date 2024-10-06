#include <stdio.h>
#include <conio.h>

void main(){
	char a[50];

	clrscr();

	printf("Please enter a character string: ");
	scanf("%s",&a);

	printf("\n~~~~~~~~~~~~~~~~~~\n");

	printf("%s",a);

	getch();
}