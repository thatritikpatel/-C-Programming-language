#include <stdio.h>
#include <conio.h>

void main(){
	char g;
	int age;

	clrscr();

	printf("Enter your gender(m/f): ");
	scanf("%c",&g);

	fflush(stdin);

	printf("\n\nEnter your age: ");
	scanf("%d",&age);

	if(age<=22){
		if(g=='m'){
			printf("MB: 500 and RI: 2%%");
		}else{
			printf("MB: 0 and RI: 4%%");
		}
	}else if(age>=60){
		if(g=='m'){
			printf("MB: 2000 and RI: 11%%");
		}else{
			printf("MB: 0 and RI: 12%%");
		}
	}else{
		if(g=='m'){
			printf("MB: 5000 and RI: 6%%");
		}else{
			printf("MB: 2000 and RI: 8%%");
		}
	}

	getch();
}