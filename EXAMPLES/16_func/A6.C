#include <stdio.h>
#include <conio.h>
#include <string.h>


//Case 3:
void drawline(int len,char s){
	int i;
	for(i=0;i<len;i++){
		printf("%c",s);
	}
}

void main(){
	char x[50];
	int len;

	clrscr();

	printf("Enter a string: ");
	scanf("%[A-Za-z0-9 ]",x);

	len = strlen(x);

	drawline(len,'^');
	printf("\n%s\n",x);
	drawline(len,'~');

	getch();
}


//Case 2:
/*
void drawline(int len){
	int i;
	for(i=0;i<len;i++){
		printf("*");
	}
}

void main(){
	char x[50];
	int len;

	clrscr();

	printf("Enter a string: ");
	scanf("%[A-Za-z0-9 ]",x);

	len = strlen(x);

	drawline(len);
	printf("\n%s\n",x);
	drawline(len);

	getch();
}
*/


//Case 1:
/*
void main(){
	clrscr();

	printf("###############\n");
	printf("Hello World...");
	printf("\n###############");

	printf("\n\n");

	printf("#######################\n");
	printf("Mohan is in class 10th");
	printf("\n#######################");

	getch();
} */