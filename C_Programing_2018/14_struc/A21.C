#include <stdio.h>
#include <conio.h>

struct Employee{
	char name[20];
	int age;
	char contact[3][11];
};

void main(){
	struct Employee e[3];
	int size,i;
	int sz,j;

	clrscr();

	sz = sizeof(e)/sizeof(e[0]);

	for(j=0;j<sz;j++){
		printf("Enter your name: ");
		scanf("%[A-Za-z ]",e[j].name);

		fflush(stdin);

		printf("\nEnter your age: ");
		scanf("%d",&e[j].age);

		size = sizeof(e[j].contact)/sizeof(e[j].contact[0]);

		for(i=0;i<size;i++){
			fflush(stdin);
			printf("\nEnter your %dth contact: ",i+1);
			scanf("%s",e[j].contact[i]);
		}

		fflush(stdin);
	}

	printf("\n#################\n\n");

	for(j=0;j<sz;j++){
		printf("\nName: %s || Age: %d\n",e[j].name,e[j].age);
		for(i=0;i<size;i++){
			printf("\t%dth Contact: %s",i+1,e[j].contact[i]);
		}
		printf("\n\n");
	}

	getch();
}






