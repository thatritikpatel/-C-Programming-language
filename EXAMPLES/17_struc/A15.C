#include <stdio.h>
#include <conio.h>

struct student{
	char name[15];
	int age;
};

void main(){
	struct student x={"ganesh ji",14},y={"sudesh",12};

	clrscr();


	printf("name: %s and age: %d",x.name,x.age);
	printf("\nname: %s and age: %d",y.name,y.age);
	getch();
}