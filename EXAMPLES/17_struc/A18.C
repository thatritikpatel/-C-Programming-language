#include <stdio.h>
#include <conio.h>

struct student{
	char name[15];
	int age;
	char contact[3][11];
};

void main(){
	int i,len,c_len,j;
	struct student x[2];

	clrscr();

	len = sizeof(x)/sizeof(x[0]);
	c_len = sizeof(x[0].contact)/sizeof(x[0].contact[0]);

	for(i=0;i<len;i++){
		printf("\nEnter %dth name: ",i+1);
		scanf("%[A-Za-z ]",x[i].name);

		fflush(stdin);

		printf("Enter %dth age: ",i+1);
		scanf("%d",&x[i].age);

		fflush(stdin);

		for(j=0;j<c_len;j++){
			printf("Enter %dth contact: ",j+1);
			scanf("%[0-9]",x[i].contact[j]);
			fflush(stdin);
		}
	}

	for(i=0;i<len;i++){
		printf("\n%dth name: %s and %dth age: %d",i+1,x[i].name,i+1,x[i].age);
		for(j=0;j<c_len;j++){
			printf(" %dth contact: %s ",j+1,x[i].contact[j]);
		}
	}

	getch();
}





