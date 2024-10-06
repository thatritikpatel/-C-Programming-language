#include <stdio.h>
#include <conio.h>

void main(){
	int x;
	char y;

	clrscr();

	printf("Enter a number(1 for E, 2 for H): ");
	scanf("%d",&x);

	fflush(stdin);
	printf("\n");
	switch(x){
		case 1:
			printf("Enter characher(A or B ):");
			scanf("%c",&y);
			switch(y){
				case 'a':
				case 'A':
					printf("Your selection is %d and %c",x,y);
					break;
				case 'b':
				case 'B':
					printf("Your selection is %d and %c",x,y);
					break;
				default:
					printf("Invalid Selection for %d",x);
			}
			break;
		case 2:
			printf("Enter characher(X or Y ):");
			scanf("%c",&y);
			switch(y){
				case 'X':
					printf("Your selection is %d and %c",x,y);
					break;
				case 'Y':
					printf("Your selection is %d and %c",x,y);
					break;
				default:
					printf("Invalid Selection for %d",x);
			}
			break;
		default:
			printf("Invalid Language Selection!");
	}


	getch();
}