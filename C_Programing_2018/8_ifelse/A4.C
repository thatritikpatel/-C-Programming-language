#include <stdio.h>
#include <conio.h>

void main(){
	int price;

	clrscr();

	printf("Please enter book price: ");
	scanf("%d",&price);

	if(price<=400){
		printf("\nBuy the book");
	}else if(price<=600){
		printf("\nTell you later");
	}else{
		printf("\nDon't buy");
	}

	printf("\nRest of the code");

	getch();
}