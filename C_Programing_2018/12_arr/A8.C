#include <stdio.h>
#include <conio.h>

void main(){
	//int x[];
	int i,size,x[] = {12,343,45,112,78,43,98};
	int max;

	clrscr();

	size = sizeof(x)/sizeof(int);

	max = x[0];
	for(i=1;i<size;i++){
		if(x[i]>max){
			max = x[i];
		}
	}

	printf("Max: %d",max);

	getch();
}
