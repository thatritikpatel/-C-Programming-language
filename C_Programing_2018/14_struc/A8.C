#include <stdio.h>
#include <conio.h>

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};

void main(){
	struct Student x;

	clrscr();

	printf("Name: %s",x.name);
	printf("\nAge: %d",x.age);
	printf("\nCity: %s",x.city);
	printf("\nContact: %s",x.contact);

	getch();
}










