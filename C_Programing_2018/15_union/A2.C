#include <stdio.h>
#include <conio.h>
#include <string.h>


union Employee{
	char name[20];
	int age;
	double height;
};
/*
struct Employee{
	char name[20];
	int age;
	double height;
};*/

void main(){
	//struct Employee e;
	union Employee e;

	clrscr();

	e.height = 5.6;
	strcpy(e.name,"mohan prasad");
	e.age = 12;

	printf("\nName: %s || Age: %d || Height: %lf",e.name,e.age,e.height);


	getch();
}



