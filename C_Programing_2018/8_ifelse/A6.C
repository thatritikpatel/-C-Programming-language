#include <stdio.h>
#include <conio.h>

void main(){
	int marks;

	clrscr();

	printf("Enter marks(%): ");
	scanf("%d",&marks);

	printf("\n");
	if(marks>=0&&marks<=100){
		if(marks>=75){
			printf("D");
		}else if(marks>=60){
			printf("FD");
		}else if(marks>=50){
			printf("SD");
		}else if(marks>=45){
			printf("TD");
		}else{
			printf("Fail");
		}
	}else{
		printf("Invalid marks");
	}

	getch();
}