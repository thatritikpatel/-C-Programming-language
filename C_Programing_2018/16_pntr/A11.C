#include <stdio.h>
#include <conio.h>

void abc(int y){
	printf("\nbefore-> y: %d",y);
	y = 76;
	printf("\nafter-> y: %d",y);
}

void main(){
	int a;
	clrscr();

	printf("Enter value: ");
	scanf("%d",&a);

	printf("\tbefore-> a: %d",a);

	abc(a);

	printf("\nafter-> a: %d",a);

	getch();
}






