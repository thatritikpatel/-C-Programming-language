//----- x
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(){
	int gd=DETECT,gm,i,j=100;

	clrscr();


	initgraph(&gd,&gm,"C:\\TC\\BGI");

	bar(100,100,400,130);
	bar(100,150,400,180);



	getch();
	closegraph();

	printf("hello " "world");


	//getch();
}