#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,m=1;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		m = m * i;
	}

	printf("%d!=%d",n,m);


	getch();
}