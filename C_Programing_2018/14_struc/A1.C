#include <stdio.h>
#include <conio.h>

struct Student{
	char name[25];
	int age;
	char city[20];
	char contact[10];
};

void main(){
	clrscr();

	printf("%d",sizeof(struct Student));

	getch();
}