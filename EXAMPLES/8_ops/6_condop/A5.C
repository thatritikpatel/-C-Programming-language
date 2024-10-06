#include <stdio.h>
#include <conio.h>

void main(){
	int m;
	clrscr();

	printf("Enter marks(%): ");
	scanf("%d",&m);


	m>100||m<0?printf("Invalid Input")
			  :m>=75?printf("D")
					:m>=60?printf("F")
						  :m>=45?printf("S")
								:m>=33?printf("T")
									  :printf("Fail");


	getch();
}