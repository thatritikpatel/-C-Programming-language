#include <stdio.h>
#include <conio.h>


struct student{
	char name[20];
	int age;
};

void main(){
	struct student x;

	clrscr();

	printf("name: %s\n",x.name);
	printf("age: %d",x.age);

	//x.name = "mohan";
	printf("\nEnter your name: ");
	//scanf("%s",x.name);
	scanf("%[A-Za-z ]",x.name);

	fflush(stdin);

	printf("\nEnter your age: ");
	scanf("%d",&x.age);

	printf("\n\nname: %s\n",x.name);
	printf("age: %d",x.age);


	getch();
}











