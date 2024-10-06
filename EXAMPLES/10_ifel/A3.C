#include <stdio.h>
#include <conio.h>

void main(){
	int a,b;
	char op;

	clrscr();

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	fflush(stdin);

	printf("\nEnter +, -, *, /: ");
	scanf("%c",&op);

	if(op=='+'){
		printf("\n%d + %d is %d",a,b,a+b);
	}else if(op=='-'){
		printf("\n%d - %d is %d",a,b,a-b);
	}else if(op=='*'){
		printf("\n%d * %d is %d",a,b,a*b);
	}else if(op=='/'){
		printf("\n%d / %d is %d",a,b,a/b);
	}else{
		printf("\nInvalid operator!");
	}

	getch();
}








