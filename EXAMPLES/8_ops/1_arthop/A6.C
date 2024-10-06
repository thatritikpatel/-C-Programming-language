#include <stdio.h>
#include <conio.h>

void main(){
	int x=93,y=2;
	float a=2.34,b=8.12;

	clrscr();

	//Case 1:
	//printf("%d",x%y); //OK

	//Case 2:
	printf("%d",a%b); //NOT OK

	printf("\n~~~~~~~~~~~~~~~~\n");

	printf("%d - %d",x,y);

	getch();
}