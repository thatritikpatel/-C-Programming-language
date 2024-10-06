#include <stdio.h>
#include <conio.h>

void main(){
	int x;

	clrscr();

	printf("sugar or sugar free?(1/2) ");
	scanf("%d",&x);

	if(x==1){
		printf("\nInput sugar");
	}else{
		printf("\nInput sugar free");
	}

	printf("\nserve tea");


	getch();
}