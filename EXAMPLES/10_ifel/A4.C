#include <stdio.h>
#include <conio.h>

void main(){
	int m;

	clrscr();

	printf("Enter your marks: ");
	scanf("%d",&m);

	printf("\n");
	if(m<=100&&m>=0){
		if(m>=75){
			printf("D");
		}else if(m>=60){
			printf("F");
		}else if(m>=45){
			printf("S");
		}else if(m>=33){
			printf("T");
		}else{
			printf("Fail");
		}
	}else{
		printf("Invalid Input!!");
	}


	getch();
}