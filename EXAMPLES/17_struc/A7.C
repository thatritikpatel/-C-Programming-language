#include <stdio.h>
#include <conio.h>


struct student{
	char name[20];
	int age;
};

void main(){
	struct student x;

	clrscr();

	printf("%d",sizeof(x));

	getch();
}