#include <stdio.h>
#include <conio.h>

void main(){
	int val;

	clrscr();

	printf("Enter a number: ");
	scanf("%d",&val);

	if(val%2==0)
		printf("%d is even number",val);
	else
		printf("%d is an odd number",val);

	getch();
}