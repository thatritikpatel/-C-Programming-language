#include <stdio.h>
#include <conio.h>

struct Employee{
	char name[20];
	int age;
	char contact[2][10];
};

void main(){
	struct Employee e;

	clrscr();

	printf("Enter your name: ");
	scanf("%[A-Za-z ]",e.name);

	fflush(stdin);

	printf("\nEnter your age: ");
	scanf("%d",&e.age);

	fflush(stdin);

	printf("\nEnter your 1st contact: ");
	scanf("%s",e.contact[0]);

	fflush(stdin);

	printf("\nEnter your 2nd contact: ");
	scanf("%s",e.contact[1]);

	fflush(stdin);

	printf("\n#################\n\n");

	printf("Name: %s",e.name);
	printf("\nAge: %d",e.age);
	printf("\nContact1: %s",e.contact[0]);
	printf("\nContact2: %s",e.contact[1]);

	getch();
}






