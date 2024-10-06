#include <stdio.h>
#include <conio.h>

#define M 10

void main(){
	int a = 2;
	clrscr();

	#if M<10
	printf("Hello");
	#elif M>10
	printf("Hello2");
	#else
	printf("Bye");
	#endif


	getch();
}
