#include <stdio.h>
#include <conio.h>

void main(){
	int opn1,opn2;
	char opr,flag;

	clrscr();

	do{
		printf("\nEnter first number: ");
		scanf("%d",&opn1);

		fflush(stdin);

		printf("Enter another number: ");
		scanf("%d",&opn2);

		fflush(stdin);

		abc:
		printf("\npress + or - or * or /: ");
		opr = getche();

		printf("\n");
		switch(opr){
			case '+':
				printf("%d + %d = %d",opn1,opn2,opn1+opn2);
				break;
			case '-':
				printf("%d - %d = %d",opn1,opn2,opn1-opn2);
				break;
			case '*':
				printf("%d * %d = %d",opn1,opn2,opn1*opn2);
				break;
			case '/':
				printf("%d / %d = %d",opn1,opn2,opn1/opn2);
				break;
			default:
				clrscr();
				printf("Invalid operator!!!");
				printf("\nFirst operand: %d and second operand: %d",opn1,opn2);
				goto abc;
		}

		printf("\nDo you want to perform another calculation(y/n): ");
		flag = getche();
	}while(flag=='y');

	printf("\n\n outside while");

	getch();
}