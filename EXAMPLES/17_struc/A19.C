#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee{
	char name[15];
	int age;
	struct address{
		char city[10];
		char state[10];
	}addr;
};

void main(){
	struct employee e1;
	clrscr();

	//printf("%d",sizeof(e1));
	strcpy(e1.name,"mohan kumar");
	e1.age = 34;
	strcpy(e1.addr.city,"Jabalpur");
	strcpy(e1.addr.state,"MP");

	printf("name: %s",e1.name);
	printf("\nage: %d",e1.age);
	printf("\naddress:\n");
	printf("\tcity: %s",e1.addr.city);
	printf("\n\tstate: %s",e1.addr.state);

	getch();
}


