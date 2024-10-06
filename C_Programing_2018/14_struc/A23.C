#include <stdio.h>
#include <conio.h>

struct Student{
	char name[20];
	int age;
	struct Address{
		char city[20];
		char contact[3][11];
	}address[2];
};

void main(){
	struct Student s[2];
	int i,j,k,sz1,sz2,sz3;

	clrscr();

	sz1 = sizeof(s)/sizeof(s[0]);

	for(i=0;i<sz1;i++){
		printf("\nEnter Your name: ");
		scanf("%[A-Za-z ]",s[i].name);

		fflush(stdin);

		printf("\nEnter Your age: ");
		scanf("%d",&s[i].age);

		fflush(stdin);

		sz2 = sizeof(s[i].address)/sizeof(s[i].address[0]);
		for(j=0;j<sz2;j++){
			printf("\nEnter Your Address: \nCity: ");
			scanf("%[A-Za-z ]",s[i].address[j].city);

			fflush(stdin);

			sz3 = sizeof(s[0].address[0].contact)/sizeof(s[0].address[0].contact[0]);
			for(k=0;k<sz3;k++){
				printf("\nEnter Your Contact: ");
				scanf("%[0-9]",s[i].address[j].contact[k]);
				fflush(stdin);
			}
		}

		fflush(stdin);
	}

	printf("\n#####################\n");

	for(i=0;i<sz1;i++){
		printf("\nName: %s || Age: %d",s[i].name,s[i].age);
		for(j=0;j<sz2;j++){
			printf("\nAddress->\nCity: %s\n",s[i].address[j].city);
			for(k=0;k<sz3;k++){
				printf("contact: %s\t",s[i].address[j].contact[k]);
			}
		}
	}

	getch();
}









