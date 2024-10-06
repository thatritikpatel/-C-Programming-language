#include <stdio.h>
#include <conio.h>

void main(){
	char op,flag;
	int a,b;
	start:
	clrscr();

	printf("\nEnter first number: ");
	scanf("%d",&a);

	fflush(stdin);

	printf("\nEnter second number: ");
	scanf("%d",&b);

	fflush(stdin);
	ops:
	printf("\nEnter (+ or - or * or /): ");
	scanf("%c",&op);

	printf("\n");
	switch(op){
		case '+':
			printf("%d %c %d is %d",a,op,b,a+b);
			break;
		case '-':
			printf("%d %c %d is %d",a,op,b,a-b);
			break;
		case '*':
			printf("%d %c %d is %d",a,op,b,a*b);
			break;
		case '/':
			printf("%d %c %d is %d",a,op,b,a/b);
			break;
		default:
			clrscr();
			printf("Invalid Operator...!");
			printf("\nYou provided two inputs %d and %d",a,b);
			goto ops;
	}

	fflush(stdin);
	printf("\n\nDo you want to perform another calculation(y/n): ");
	scanf("%c",&flag);

	if(flag=='y'||flag=='Y'){
		goto start;
	}

	//getch();
}








