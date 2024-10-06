#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};

void main(){
	char arr[30];
	int ag;
	struct Student x;

	clrscr();

	printf("Enter your name: ");
	scanf("%[A-Za-z ]",arr);
	strcpy(x.name,arr);

	fflush(stdin);

	printf("\nEnter your age: ");
	scanf("%d",&ag);
	x.age = ag;
	fflush(stdin);

	printf("\nEnter your city: ");
	scanf("%[A-Za-z ]",arr);
	strcpy(x.city,arr);
	fflush(stdin);

	printf("\nEnter your contact: ");
	scanf("%[0-9]",arr);
	strcpy(x.contact,arr);

	printf("\n\nName: %s",x.name);
	printf("\nAge: %d",x.age);
	printf("\nCity: %s",x.city);
	printf("\nContact: %s",x.contact);

	getch();
}










