#include <stdio.h>
#include <conio.h>

int add(int x,int y){
	return x+y;
}

void main(){
	int x;
	int y = 1;

	clrscr();

	//printf("Enter a number: ");
	//scanf("%d",&x);

	//printf("%d",add(567,789));



	switch(x){
		case 1:
			printf("~~~~~1");
			break;
		case add(1,1):
			printf("~~~~~2 #");
			break;
		case 3:
			printf("~~~~~3");
		default:
			printf("####");
	}

	getch();
}