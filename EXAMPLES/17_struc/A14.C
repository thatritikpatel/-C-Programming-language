#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student{
	char name[15];
	int age;
};

void main(){
	struct student x = {"ganesh ji",14};

	clrscr();


	printf("name: %s and age: %d",x.name,x.age);

	getch();
}