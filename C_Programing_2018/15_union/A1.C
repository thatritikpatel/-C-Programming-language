#include <stdio.h>
#include <conio.h>

union Student{
	char name[20];
	int age;
	double height;
};

struct Employee{
	char name[20];
	int age;
	double height;
};

void main(){
	clrscr();

	printf("%d",sizeof(struct Employee));
	printf("\n%d",sizeof(union Student));

	getch();
}



