#include <stdio.h>
#include <conio.h>

void main(){
	int x[7]={75,22,56,9,90,12,333};
	int i,max=x[0],size;

	clrscr();

	size = sizeof(x)/sizeof(int);
	for(i=1;i<size;i++){
		if(x[i]>max){
			max = x[i];
		}
	}

	printf("max value: %d",max);

	getch();
}