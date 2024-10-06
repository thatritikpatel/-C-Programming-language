#include <stdio.h>
#include <conio.h>

void main(){
	int x[3] = {12,13,14};
	int i,sz;

	clrscr();

	sz = sizeof(x)/sizeof(int);

	printf("addr-of-x:%u\n",x);
	printf("addr-of-x:%u\n\n",&x);

	for(i=0;i<sz;i++){
		printf("i:%d  -  x[%d]:%d - addr-of-x[%d]:%u\n",i,i,x[i],i,&x[i]);
	}


	getch();
}



