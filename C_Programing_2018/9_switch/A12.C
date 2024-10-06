#include <stdio.h>
#include <conio.h>

int add(int x,int y){
	return x+y;
}


void main(){
	int x = 7;
	clrscr();

	//Case 6:
	switch(add(31,35)){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	}

	//Case 5:
	/*
	switch(2+x){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	}*/


	//Case 4:
	/*
	switch(2+3){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	} */


	//Case 3:
	/*
	switch(5){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	} */

	//Case 2:
	/*
	switch('A'){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	} */

	//Case 1:
	/*
	switch(2.34){
		case 66:
			printf("~~~~~1");
			break;
		case 98:
			printf("~~~~~2");
			break;
		case 32:
			printf("~~~~~3");
		default:
			printf("####");
	} */

	getch();
}