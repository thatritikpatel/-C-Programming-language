#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Employee{
	char name[25];
	int age;
}x,y;

void abc(){
	printf("\n#### Name: %s and Age: %d",x.name,x.age);
	printf("\n#### Name: %s and Age: %d",y.name,y.age);

}

void main(){
	clrscr();

	printf("Name: %s and Age: %d",x.name,x.age);
	printf("\nName: %s and Age: %d",y.name,y.age);

	abc();

	getch();
}










