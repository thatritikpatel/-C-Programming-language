#include <stdio.h>
#include <conio.h>

void main(){
	int i;
	clrscr();

	for(i=0;i<5;i++){
		printf("i value = %d\n",i);

		if(i>=2)
			break;

		printf("-: %d :-\n",i);
	}

	getch();
}