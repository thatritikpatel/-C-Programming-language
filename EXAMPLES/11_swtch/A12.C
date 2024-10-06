#include <stdio.h>
#include <conio.h>

void main(){
	char y;
	int a,b;

	clrscr();

	printf("press +,-,*,/: ");
	scanf("%c",&y);

	fflush(stdin);

	printf("Enter First Number: ");
	scanf("%d",&a);

	printf("Enter another number: ");
	scanf("%d",&b);

	switch(y){
		case '+':
			printf("%d %c %d = %d",a,y,b,a+b);
			break;
		case '-':
			printf("%d %c %d = %d",a,y,b,a-b);
			break;
		case '*':
			printf("%d %c %d = %d",a,y,b,a*b);
			break;
		case '/':
			printf("%d %c %d = %d",a,y,b,a/b);
			break;
		default:
			printf("invalid input!");
	}

	getch();
}