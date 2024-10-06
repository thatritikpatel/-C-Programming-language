#include <stdio.h>
#include <conio.h>

struct student{
	char *name;
	int age;
};

void main(){
	struct student s,*p=&s;
	clrscr();

	//printf("\t%d - %d",sizeof(s),sizeof(p));

	printf("\tEnter Name: ");
	//scanf("%[A-Za-z ]",s.name);
	scanf("%[A-Za-z ]",p->name);
	fflush(stdin);
	printf("\n\tEnter Age: ");
	scanf("%d",&p->age);

	printf("\n\tname: %s\n\tage: %d",p->name,p->age);


	getch();
}