#include <stdio.h>
#include <conio.h>


struct student{
	char name[15];
	int age;
}x,y;

void main(){
	int z;

	clrscr();

	//Case 2:
	printf("%d",sizeof(struct student));
	printf("\n%d",sizeof(x));
	printf("\n%d",sizeof(y));

	//Case 1:
	//printf("%d\n",sizeof(z));
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(12));

	getch();
}