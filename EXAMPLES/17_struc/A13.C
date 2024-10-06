#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student{
	char name[15];
	int age;
};

void main(){
	struct student x;

	clrscr();

	strcpy(x.name,"mohan singh");
	x.age = 14;

	printf("name: %s and age: %d",x.name,x.age);

	getch();
}