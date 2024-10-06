#include <stdio.h>
#include <conio.h>

void main(){
	int age;
	char gender;
	char flag;

	clrscr();

	printf("Enter Your Age: ");
	scanf("%d",&age);

	fflush(stdin);

	printf("\nEnter your gender(m/f): ");
	scanf("%c",&gender);

	fflush(stdin);

	printf("Cheque Book?(y/n)");
	scanf("%c",&flag);

	if(age>60){
		if(gender=='f'){
			printf("MB: %d and RI: 12",flag=='y'?0+500:0);
		}else{
			printf("MB: %d and RI: 11",flag=='y'?2000+500:2000);
		}
	}else if(age<=22){
		if(gender=='f'){
			printf("MB: %d and RI: 4",flag=='y'?0+500:0);
		}else{
			printf("MB: %d and RI: 2",flag=='y'?500+500:500);
		}
	}else{
		if(gender=='f'){
			printf("MB: %d and RI: 8",flag=='y'?2000+500:2000);
		}else{
			printf("MB: %d and RI: 6",flag=='y'?5000+500:5000);
		}
	}


	getch();
}









