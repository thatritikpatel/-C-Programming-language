#include <stdio.h>
#include <conio.h>

struct abc{
	float x;
	char y;
	int z;
};

union mno{
	float x;
	char y;
	int z;
};

void main(){

	clrscr();

	printf("struct abc size:%d and union mno size: %d",sizeof(struct abc),sizeof(union mno));

	getch();
}