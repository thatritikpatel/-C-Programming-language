#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	if(y==1){
		printf("------ 1#");
	}else if(y==2){
		printf("------ 2#");
	}else if(y==3){
		printf("------ 3#");
	}else{
		printf("Default#");
	}

	/*
	switch(y){
		case 1:
			printf("------ 1");
			break;
		case 2:
			printf("-------2");
			break;
		case 3:
			printf("-------3");
			break;
		default:
			printf("Default");
	} */

	printf("\n######");

	getch();
}