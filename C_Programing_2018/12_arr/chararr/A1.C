#include <stdio.h>
#include <conio.h>

void main(){
	char x[2];
	int i;

	clrscr();


	printf("%c",x[0]);
	printf("\n%c",x[1]);

	x[0] = 'A';
	x[1] = 'a';

	printf("\n##############\n");

	printf("%d",x[0]);
	printf("\n%d",x[1]);

	printf("\n\n%s",x);

	printf("\n##############\n");

	for(i=0;i<5;i++){
		printf("%c-%d\n",x[i],x[i]);
	}

	getch();
}