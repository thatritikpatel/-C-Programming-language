#include <stdio.h>
#include <conio.h>

void main(){
	char x[17];
	int i,size;

	clrscr();

	size = sizeof(x);

	//printf("%s\n\n",x);
	for(i=0;i<size;i++){
		printf("%c ",x[i]);
	}

	printf("\n\nEnter your name: ");
	scanf("%s",x);

	//printf("\n%s",x);
	for(i=0;i<size;i++){
		printf("%c ",x[i]);
	}

	getch();
}