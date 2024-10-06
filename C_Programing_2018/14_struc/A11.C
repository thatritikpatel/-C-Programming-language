#include <stdio.h>
#include <conio.h>

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};

void main(){
	//struct Student x = {{'A','m','i','t','\0'},12,{'J','b','p','\0'},{'9','0','1','9','7','\0'}};
	struct Student x = {"mohan singh",23,"Indore","876786876"};

	clrscr();

	printf("\n\nName: %s",x.name);
	printf("\nAge: %d",x.age);
	printf("\nCity: %s",x.city);
	printf("\nContact: %s",x.contact);

	getch();
}










