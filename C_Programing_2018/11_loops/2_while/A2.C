#include <stdio.h>
#include <conio.h>

void main(){
	char c;

	clrscr();

	printf("Enter a charcter(y/n): ");
	scanf("%c",&c);

	while(c=='y'){
		printf("~~~~\n");
		fflush(stdin);
		printf("\nEnter one more character(y/n): ");
		scanf("%c",&c);
	}
}