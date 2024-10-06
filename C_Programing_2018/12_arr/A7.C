#include <stdio.h>
#include <conio.h>

void main(){
	//int x[];
	int i,size,x[] = {12,45,78,43,98};

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		printf("%d\n",x[i]);
	}

	getch();
}
