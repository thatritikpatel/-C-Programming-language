#include <stdio.h>
#include <conio.h>

void main(){
	clrscr();

	//printf("%d",sizeof(2+'A'));
	//printf("%d",sizeof(2+'A'+3.4f));
	//printf("%d",sizeof(2+'A'+3.4f+5.6));
	printf("%d",sizeof(2+'A'+3.4f+5.6+4.34l));

	getch();
}