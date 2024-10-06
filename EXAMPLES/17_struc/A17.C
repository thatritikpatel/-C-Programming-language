#include <stdio.h>
#include <conio.h>

struct student{
	char name[15];
	int age;
};

void main(){
	int i,len;
	struct student x[3];

	clrscr();

	len = sizeof(x)/sizeof(x[0]);

	for(i=0;i<len;i++){
		printf("\nEnter %dth name: ",i+1);
		scanf("%[A-Za-z ]",x[i].name);

		fflush(stdin);

		printf("Enter %dth age: ",i+1);
		scanf("%d",&x[i].age);

		fflush(stdin);
	}

	for(i=0;i<len;i++){
		printf("\n%dth name: %s and %dth age: %d",i+1,x[i].name,i+1,x[i].age);
	}

	getch();
}





