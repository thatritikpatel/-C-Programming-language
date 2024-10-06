#include <stdio.h>
#include <conio.h>

int add(int a,int b){
	return a+b;
}

void main(){
	char c = 'A';
	char z = '0';
	int i = 2;
	clrscr();

	//printf("%d",sizeof(12+34));
	//printf("%d",sizeof(i+c));
	//printf("%d",sizeof(c+z));

	printf("%d",sizeof(add(12,45)));

	getch();
}





