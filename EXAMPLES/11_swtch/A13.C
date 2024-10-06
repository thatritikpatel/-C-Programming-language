#include <stdio.h>
#include <conio.h>

void main(){
	int age;
	char gen;

	clrscr();

	printf("Enter your age: ");
	scanf("%d",&age);

	fflush(stdin);

	printf("Enter your gender(m/f): ");
	scanf("%c",&gen);

	printf("\n");
	switch(gen){
		case 'm':
			if(age>0&&age<100){
				if(age<=22){
					printf("MB: 500 and RI: 2%%");
				}else if(age<60){
					printf("MB: 5000 and RI: 6%%");
				}else{
					printf("MB: 2000 and RI: 11%%");
				}
			}else{
				printf("Invalid Age");
			}
			break;
		case 'f':
			if(age>0&&age<100){
				if(age<=22){
					printf("MB: 0 and RI: 4%%");
				}else if(age<60){
					printf("MB: 2000 and RI: 8%%");
				}else{
					printf("MB: 0 and RI: 12%%");
				}
			}else{
				printf("Invalid Age");
			}
			break;
		default:
			printf("Invalid Gender Input!!!");
	}

	getch();
}