#include <stdio.h>
#include <conio.h>

#define PI 3.143256

float calcPr(int r){
	return 2 * PI * r;
}

float calcArea(int r){
	return PI * r * r;
}

void main(){
	int r;
	clrscr();
	printf("Enter Radius");
	scanf("%d",&r);
	printf("%f",calcArea(r));

	getch();
}










