#include <stdio.h>
#include <conio.h>

struct Student{
	char name[20];
	int age;
	struct Address{
		char city[20];
		char contact[11];
	}address;
};

void main(){
	struct Student s;

	clrscr();

	printf("\nEnter Your name: ");
	scanf("%[A-Za-z ]",s.name);

	fflush(stdin);

	printf("\nEnter Your age: ");
	scanf("%d",&s.age);

	fflush(stdin);

	printf("\nEnter Your Address: \nCity: ");
	scanf("%[A-Za-z ]",s.address.city);

	fflush(stdin);

	printf("\nEnter Your Contact: ");
	scanf("%[0-9]",s.address.contact);

	fflush(stdin);

	printf("\n#####################\n");

	printf("\nName: %s || Age: %d",s.name,s.age);
	printf("\nAddress->\nCity: %s\tContact: %s",s.address.city,s.address.contact);


	getch();
}









