#include <stdio.h>
#include <conio.h>

void main(){
	int x[4]={1,2,3,4};
	int i,size,sum=0;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		sum = sum + x[i];
	}

	printf("\n%d",sum);

	getch();
}