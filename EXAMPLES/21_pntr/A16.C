#include <stdio.h>
#include <conio.h>

void add(int x,int y){
	printf("\t%d",x+y);
}

void subt(int x,int y){
	printf("\t%d",x-y);
}

void main(){
	int r,a,b,flag=1;
	void (*f)();
	clrscr();

	printf("\tEnter 1 for add or 2 for subtract: ");
	scanf("%d",&r);

	switch(r){
		case 1:
			f = &add;
			break;
		case 2:
			f = &subt;
			break;
		default:
			printf("\n\tInvalid input");
			flag = 0;
	}

	if(flag==1){
		fflush(stdin);
		printf("\n\tEnter first number: ");
		scanf("%d",&a);

		fflush(stdin);
		printf("\n\tEnter second number: ");
		scanf("%d",&b);

		printf("\n~~~~~~~~~~~~~~~~~~\n");
		(*f)(a,b);
		printf("\n~~~~~~~~~~~~~~~~~~\n");
	}else{
		printf("No operations performed");
	}


	getch();
}








