#include <stdio.h>
#include <conio.h>

void main(){
	int y;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&y);

	/*
	switch(y){
		case 0:
		case 1:
		case 2:
			printf("value is small");
			break;
		case 3:
		case 4:
			printf("value is medium");
			break;
		case 5:
		case 6:
		case 7:
			printf("value is large");
			break;
		default:
			printf("value is huge");
	}
	*/

	/*
	if(y<3){
		printf("value is small");
	}else if(y<5){
		printf("value is medium");
	}else if(y<8){
		printf("value is large");
	}else{
		printf("value is huge");
	}*/


	printf("\n######");

	getch();
}