#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
	int gd=DETECT,gm;

	clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	arc(200,200,0,360,50);

	getch();
	closegraph();

	//getch();
}