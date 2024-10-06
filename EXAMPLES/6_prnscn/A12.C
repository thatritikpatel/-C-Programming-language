#include <stdio.h>
#include <conio.h>

void main(){
	char a[50];

	clrscr();

	printf("Please enter a character string: ");
	scanf("%[A-Za-z0-9 ]",&a);

	printf("\n~~~~~~~~~~~~~~~~~~\n");

	printf("%s",a);

	getch();
}