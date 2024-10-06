#include <stdio.h>
#include <conio.h>

int add(int a,int b){
	return a+b;
}

int subt(int a,int b){
	return a-b;
}

int mult(int a,int b){
	return a*b;
}

int div(int a,int b){
	return a/b;
}

void main(){
	int x,y;
	char op,flag;

	start:

	clrscr();


	printf("\nEnter first number: ");
	scanf("%d",&x);

	fflush(stdin);

	printf("\nEnter another number: ");
	scanf("%d",&y);

	fflush(stdin);

	opr:

	printf("\nEnter +, -, * or / : ");
	scanf("%c",&op);

	switch(op){
		case '+':
			printf("\n%d + %d = %d",x,y,add(x,y));
			break;
		case '-':
			printf("\n%d - %d = %d",x,y,subt(x,y));
			break;
		case '*':
			printf("\n%d * %d = %d",x,y,mult(x,y));
			break;
		case '/':
			printf("\n%d / %d = %d",x,y,div(x,y));
			break;
		default:
			clrscr();
			printf("\nInvalid input...");
			printf("\nFirst Value: %d and Second value: %d",x,y);
			goto opr;
	}

	fflush(stdin);
	printf("\n\nDo you want to perform another calculation:(y/n) ");
	scanf("%c",&flag);

	if(flag=='y'||flag=='Y'){
		goto start;
	}
}














