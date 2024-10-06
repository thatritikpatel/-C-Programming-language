#include <stdio.h>
#include <conio.h>

struct Employee{
	char name[20];
	int age;
	char contact[3][11];
};

void main(){
	struct Employee e;
	int size,i;

	clrscr();

	printf("Enter your name: ");
	scanf("%[A-Za-z ]",e.name);

	fflush(stdin);

	printf("\nEnter your age: ");
	scanf("%d",&e.age);

	size = sizeof(e.contact)/sizeof(e.contact[0]);

	for(i=0;i<size;i++){
		fflush(stdin);
		printf("\nEnter your %dth contact: ",i+1);
		scanf("%s",e.contact[i]);
	}

	fflush(stdin);

	printf("\n#################\n\n");

	printf("Name: %s",e.name);
	printf("\nAge: %d",e.age);
	for(i=0;i<size;i++){
		printf("\n%dth Contact: %s",i+1,e.contact[i]);
	}

	getch();
}






