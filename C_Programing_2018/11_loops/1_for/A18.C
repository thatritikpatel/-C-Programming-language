#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,p,t=1;
	clrscr();

	printf("Enter a number and power: ");
	scanf("%d%d",&n,&p);

	for(i=0;i<p;i++){
		t = t * n;
	}

	printf("%d",t);


	getch();
}