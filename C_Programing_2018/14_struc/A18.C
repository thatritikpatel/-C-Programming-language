#include <stdio.h>
#include <conio.h>

typedef struct{
	char name[30];
	int age;
	char city[30];
} Student;

void main(){
	Student x;

	clrscr();

	printf("%d",sizeof(Student));

	getch();
}