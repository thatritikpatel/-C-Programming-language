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

	printf("Enter your name: ");
	scanf("%[A-Za-z ]",x.name);
	fflush(stdin);

	printf("\nEnter your age: ");
	scanf("%d",&x.age);
	fflush(stdin);

	printf("\nEnter your city: ");
	scanf("%[A-Za-z ]",x.city);
	fflush(stdin);

	printf("\nEnter your contact: ");
	scanf("%[0-9]",x.contact);

	printf("\n\nName: %s",x.name);
	printf("\nAge: %d",x.age);
	printf("\nCity: %s",x.city);
	printf("\nContact: %s",x.contact);

	getch();
}










