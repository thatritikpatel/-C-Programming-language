#include <stdio.h>
#include <conio.h>

void main(){
	int i = 5;
	clrscr();

	//Case 4:
	while(--i)
		printf("%d ",i);
		//printf("%d",i);

	//Case 3:
	//while(i--)
		//printf("%d ",i);

	//Case 1:
	//while(i--);
		//printf("%d",i);

	//Case 2:
	//while(--i);
		//printf("%d",i);

	getch();
}