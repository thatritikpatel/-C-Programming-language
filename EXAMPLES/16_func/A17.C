#include <stdio.h>
#include <conio.h>

void abc(int x,char c){
	if(x){
		if(c=='n')
			printf("%c ",65+x-1);

		abc(x-1,c);

		if(c=='y')
			printf("%c ",65+x-1);
	}
}

void main(){
	int n;
	char c;

	clrscr();

	printf("Enter a number(1-26): ");
	scanf("%d",&n);

	fflush(stdin);

	printf("press y for asc and n for desc: ");
	scanf("%c",&c);

	abc(n,c);

	getch();
}


