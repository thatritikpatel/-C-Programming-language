#include <stdio.h>
#include <conio.h>

void mno(){
	struct Student k;
}

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};

void abc(){
	struct Student t;

	mno();
}

void main(){
	struct Student x;

	clrscr();

	abc();

	getch();
}