#include <stdio.h>
#include <conio.h>

void main(){
	int age;
	char gender;
	clrscr();

	printf("Enter Your Age: ");
	scanf("%d",&age);

	fflush(stdin);

	printf("\nEnter your gender(m/f): ");
	scanf("%c",&gender);


	if(gender=='f'){
		if(age>60){
			printf("MB: 0 and RI: 12");
		}else if(age<=22){
			printf("MB: 0 and RI: 4");
		}else{
			printf("MB: 2000 and RI: 8");
		}
	}else{
		if(age<=22){
			printf("MB: 500 and RI: 2");
		}else if(age>60){
			printf("MB: 2000 and RI: 11");
		}else{
			printf("MB: 5000 and RI: 6");
		}
	}


	getch();
}









