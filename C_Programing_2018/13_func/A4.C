#include <stdio.h>
#include <conio.h>
#include <process.h>

int add(int a,int b){
	return a+b;
}

int subt(int a,int b){
	return a-b;
}

int mult(int a,int b){
	return a*b;
}

int dvd(int a,int b){
	return a/b;
}

void main(){
	int a,b;
	char op;

	clrscr();

	mno:
	clrscr();
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	fflush(stdin);

	abc:
	clrscr();
	fflush(stdin);
	printf("\nChoose one operation(+,-,* or /): ");
	scanf("%c",&op);

	fflush(stdin);
	printf("\n");

	switch(op){
		case '+':
			printf("%d+%d is %d",a,b,add(a,b));
			break;
		case '-':
			printf("%d--%d is %d",a,b,subt(a,b));
			break;
		case '*':
			printf("%d*%d is %d",a,b,mult(a,b));
			break;
		case '/':
			printf("%d/%d is %d",a,b,dvd(a,b));
			break;
		default:
			printf("Invalid Operation!!!");
			printf("\nPress y to repeat or x to exit: ");

			scanf("%c",&op);
			if(op=='y'){
				goto abc;
			}else{
				exit(0);
			}
	}

	fflush(stdin);
	printf("\nDo you want another transaction(y/n): ");
	scanf("%c",&op);

	if(op=='y'){
		goto mno;
	}else{
		exit(0);
	}

	getch();
}









