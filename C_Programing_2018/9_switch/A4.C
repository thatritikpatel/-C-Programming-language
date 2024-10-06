#include <stdio.h>
#include <conio.h>

void main(){
	int op1,op2;
	char opr;

	clrscr();

	printf("Enter 2 numbers: ");
	scanf("%d%d",&op1,&op2);

	fflush(stdin);

	printf("\nEnter character(+,-,*,/): ");
	scanf("%c",&opr);

	switch(opr){
		case '+':
			printf("\n%d + %d is %d",op1,op2,op1+op2);
			break;
		case '-':
			printf("\n%d - %d is %d",op1,op2,op1-op2);
			break;
		case '*':
			printf("\n%d * %d is %d",op1,op2,op1*op2);
			break;
		case '/':
			printf("\n%d / %d is %d",op1,op2,op1/op2);
			break;
		default:
			printf("\nInvalid Symbol");
	}



	getch();
}