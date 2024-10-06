#include <stdio.h>
#include <conio.h>

void main(){
	int price;

	clrscr();

	printf("Enter book price: ");
	scanf("%d",&price);

	//Case 1:
	/*
	price<=200?printf("Buy")
			  :price>200&&price<=400?printf("Later")
									:printf("Don't buy");
	*/


	//Case 2:
	/*
	price<=200?printf("Buy")
			  :price<=400?printf("Later")
									:printf("Don't buy");
	*/

	//Case 3:
	//printf("%s",price<=200?"Buy":price<=400?"Later":"DON'T BUY");

	getch();
}