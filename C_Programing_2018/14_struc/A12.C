#include <stdio.h>
#include <conio.h>

struct Student{
	char name[25];
	int age;
	char city[30];
	char contact[10];
};

void main(){
	int arrSize;
	int i;
	struct Student x[3];

	clrscr();

	arrSize = sizeof(x)/sizeof(struct Student);

	for(i=0;i<arrSize;i++){

		printf("Enter your name: ");
		scanf("%[A-Za-z ]",x[i].name);
		fflush(stdin);

		printf("\nEnter your age: ");
		scanf("%d",&x[i].age);
		fflush(stdin);

		printf("\nEnter your city: ");
		scanf("%[A-Za-z ]",x[i].city);
		fflush(stdin);

		printf("\nEnter your contact: ");
		scanf("%[0-9]",x[i].contact);
		fflush(stdin);
	}

	for(i=0;i<arrSize;i++){
		printf("\n\nName: %s",x[i].name);
		printf("\nAge: %d",x[i].age);
		printf("\nCity: %s",x[i].city);
		printf("\nContact: %s",x[i].contact);
	}

	getch();
}










