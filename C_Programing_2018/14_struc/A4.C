#include <stdio.h>
#include <conio.h>

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};


void main(){
	int y;
	struct Student x;

	clrscr();

	printf("%d",sizeof(x));

	getch();
}