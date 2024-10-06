#include <stdio.h>
#include <conio.h>

void main(){
	int n;
	int sum=0;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(n!=0){
		sum = (sum*10) + (n%10);
		//printf("%d ",sum);
		n = n / 10;
	}

	printf("\n%u",sum);

	getch();
}








