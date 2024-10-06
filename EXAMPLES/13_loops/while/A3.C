#include <stdio.h>
#include <conio.h>

void main(){
	char x = 'y';
	int t = 3;

	clrscr();

	while(1){
		printf("%d\n",t--);

		printf("Press y/n: ");
		x=getche();
		if(x!='y')
			break;
		printf("\n######\n");
	}

	printf("\n\noutside while");

	getch();
}