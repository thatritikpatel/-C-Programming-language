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
	struct abc w;
	union mno v;

	clrscr();

	w.x = 2.34f;
	w.y = 'A';
	w.z = 12;


	v.y = 'B';
	v.z = 22;
	v.x = 4.56f;

	printf("%f\t%c\t%d",w.x,w.y,w.z);
	printf("\n\n");
	printf("%f\t%c\t%d",v.x,v.y,v.z);



	getch();
}