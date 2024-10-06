#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
	int gd=DETECT,gm,i,j;
	//clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	arc(200,200,0,270,100);

	getch();
	closegraph();
}







