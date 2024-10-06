#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee{
	char name[15];
	int age;
	struct address{
		char city[10];
		char state[10];
		char contact[2][11];
	}addr[2];
}e[3];

void main(){
	int i,j,k,ln1,ln2,ln3;

	clrscr();

	//printf("%d",sizeof(e));
	ln1 = sizeof(e)/sizeof(e[0]);
	ln2 = sizeof(e[0].addr)/sizeof(e[0].addr[0]);
	ln3 = sizeof(e[0].addr[0].contact)/sizeof(e[0].addr[0].contact[0]);

	for(i=0;i<ln1;i++){
		printf("Enter your name: ");
		scanf("%[A-Za-z ]",e[i].name);

		fflush(stdin);

		printf("Enter your age: ");
		scanf("%d",&e[i].age);

		fflush(stdin);

		for(j=0;j<ln2;j++){
			printf("Enter %dth city: ",j+1);
			scanf("%[A-Za-z ]",e[i].addr[j].city);

			fflush(stdin);

			printf("Enter %dth state: ",j+1);
			scanf("%[A-Za-z ]",e[i].addr[j].state);

			fflush(stdin);

			for(k=0;k<ln3;k++){
				printf("Enter %dth contact: ",k+1);
				scanf("%[0-9]",e[i].addr[j].contact[k]);
				fflush(stdin);
			}
		}
	}



	for(i=0;i<ln1;i++){
		printf("%dth employee record: \n#####################\n",i+1);
		printf("name: %s",e[i].name);
		printf("\nage: %d",e[i].age);

		for(j=0;j<ln2;j++){
			printf("Addresses: \n~~~~~~~~~~~\n");
			printf("  city: %s",e[i].addr[j].city);
			printf("\n  state: %s",e[i].addr[j].state);

			for(k=0;k<ln3;k++){
				printf("Contacts: \n**********\n");
				printf("   %d. Contact: %s",k+1,e[i].addr[j].contact[k]);
			}
		}
	}


	getch();
}















