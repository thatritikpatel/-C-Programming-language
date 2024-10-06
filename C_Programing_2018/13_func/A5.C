#include <stdio.h>
#include <conio.h>
#include <string.h>

//Case 5:

void drawLine(int x,char y){
	int i;

	for(i=0;i<x;i++){
		printf("%c",y);
	}
}

void main(){
	char x[70];

	int len;
	char s;

	clrscr();

	printf("Enter a string: ");
	scanf("%[A-Za-z0-9 ]",x);

	fflush(stdin);

	printf("Enter any special character: ");
	scanf("%c",&s);

	len = strlen(x);
	drawLine(len,s);
	printf("\n%s\n",x);
	drawLine(len,s);



	getch();
}

//Case 4:
/*
void drawLine(int x,char y){
	int i;

	for(i=0;i<x;i++){
		printf("%c",y);
	}
}

void main(){
	char x[] = "Hello World...";
	char y[] = "Mohan is a good boy";
	int len;
	char s;

	clrscr();

	printf("Enter any special character: ");
	scanf("%c",&s);

	len = strlen(x);
	drawLine(len,s);
	printf("\n%s\n",x);
	drawLine(len,s);

	printf("\n\n");

	len = strlen(y);
	drawLine(len,s);
	printf("\n%s\n",y);
	drawLine(len,s);


	getch();
}*/



//Case 3:

/*
void drawLine(int x){
	int i;

	for(i=0;i<x;i++){
		printf("#");
	}
}

void main(){
	char x[] = "Hello World...";
	char y[] = "Mohan is a good boy";
	int len;

	clrscr();

	len = strlen(x);
	drawLine(len);
	printf("\n%s\n",x);
	drawLine(len);

	printf("\n\n");

	len = strlen(y);
	drawLine(len);
	printf("\n%s\n",y);
	drawLine(len);


	getch();
} */



//Case 2:

/*
void drawLine(){
	printf("##################");
}

void main(){

	clrscr();

	drawLine();
	printf("\nHello World...\n");
	drawLine();

	printf("\n\n");

	drawLine();
	printf("\nMohan is a good boy\n");
	drawLine();


	getch();
}
*/


//Case 1:
/*
void main(){

	clrscr();

	printf("###############");
	printf("\nHello World...\n");
	printf("###############");

	printf("\n\n########################");
	printf("\nMohan is a good boy\n");
	printf("########################");


	getch();
} */