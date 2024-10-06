#include <stdio.h>
#include <conio.h>

void abc(int y[]){
	int size,i;
	size = sizeof(y)/sizeof(int);

	printf("\n%d %d %d - %d - %d",y[0],y[1],y[2],size,sizeof(y));
	//printf("%d",y+0);
}

void main(){
	int x[] = {12,45,78};
	clrscr();

	printf("%d",sizeof(x));
	abc(x);

	getch();
}
