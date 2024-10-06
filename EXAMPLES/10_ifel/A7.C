#include <stdio.h>
#include <conio.h>

void main(){
	char g,ch;
	int age,basic;

	clrscr();

	printf("Enter your gender(m/f): ");
	scanf("%c",&g);

	fflush(stdin);

	printf("\n\nEnter your age: ");
	scanf("%d",&age);

	fflush(stdin);

	printf("Do you want cheque book(y/n): ");
	scanf("%c",&ch);

	if(age<=22){
		if(g=='m'){
			basic = 500;
			printf("MB: %d and RI: 2%%",ch=='y'?basic+500:basic);
		}else{
			basic = 0;
			printf("MB: %d and RI: 4%%",ch=='y'?basic+500:basic);
		}
	}else if(age>=60){
		if(g=='m'){
			basic = 2000;
			printf("MB: %d and RI: 11%%",ch=='y'?basic+500:basic);
		}else{
			basic = 0;
			printf("MB: %d and RI: 12%%",ch=='y'?basic+500:basic);
		}
	}else{
		if(g=='m'){
			basic = 5000;
			printf("MB: %d and RI: 6%%",ch=='y'?basic+500:basic);
		}else{
			basic = 2000;
			printf("MB: %d and RI: 8%%",ch=='y'?basic+500:basic);
		}
	}

	getch();
}