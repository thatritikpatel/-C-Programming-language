#include <stdio.h>
#include <conio.h>

void main(){
	char x[20];
	int i;

	clrscr();

	printf("Enter your name: ");
	scanf("%s",x);

	printf("\n##########\n");

	printf("%s\n",x);

	for(i=0;i<20;i++){
		printf("%c-%d\n",x[i],x[i]);
	}

	getch();
}