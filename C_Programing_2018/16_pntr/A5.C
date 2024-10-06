#include <stdio.h>
#include <conio.h>

struct Student{
	char name[8];
	int age;
	float marks;
};

void main(){

	//Case 1:
	//struct Student s = {"mohan",12,45.78};
	//struct Student *w = &s;

	//Case 2:
	//struct Student s={"naresh",22,87},*w=&s;


	clrscr();

	//printf("sizeof(s): %d \n sizeof(w): %d",sizeof(s),sizeof(w));

	printf("name: %s\nage: %d\nmarks: %f",s.name,s.age,s.marks);
	printf("\nname: %s\nage: %d\nmarks: %f",w->name,w->age,w->marks);


	getch();
}





