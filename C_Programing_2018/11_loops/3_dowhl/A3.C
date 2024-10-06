#include <stdio.h>
#include <conio.h>

void main(){
	int a,b;
	char op,next;

	do{
		clrscr();

		fflush(stdin);
		printf("Enter 2 numbers: ");
		scanf("%d%d",&a,&b);

		fflush(stdin);

		again:
		printf("\nEnter character (+,-,* or /): ");
		scanf("%c",&op);

		switch(op){
			case '+':
				printf("%d+%d=%d",a,b,a+b);
				break;
			case '-':
				printf("%d-%d=%d",a,b,a-b);
				break;
			case '*':
				printf("%d*%d=%d",a,b,a*b);
				break;
			case '/':
				printf("%d/%d=%d",a,b,a/b);
				break;
			default:
				printf("\nInvalid operator");
				goto again;
		}

		fflush(stdin);
		printf("\n Do you want another transaction(y/n): ");
		//next = getch();
	}while(getch()=='y');
}





