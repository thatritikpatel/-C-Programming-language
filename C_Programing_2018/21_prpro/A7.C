#include <stdio.h>
#include <conio.h>

#define PRINT(format,variable)  printf("variable = %format\n",variable);

void main(){
	int price = 2,count = 3;
	clrscr();

	PRINT(d,price*count)


	//printf("variable = %format",price*count);


	//printf("price*count = %d\n",price*count);


	getch();
}