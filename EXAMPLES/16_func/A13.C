#include <stdio.h>
#include <conio.h>

void iterate(int x[],int c){
	int i;
	//printf("%d",sizeof(x));

	//printf("%d",x[0]);

	for(i=0;i<c;i++){
		printf("~%d~\n",x[i]);
	}
}


void main(){
	int x[] = {12,13,14,15};
	int size;

	clrscr();

	//printf("%d",sizeof(x));
	//printf("%d",x[0]);

	size = sizeof(x)/sizeof(int);
	iterate(x,size);

	getch();
}