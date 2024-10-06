#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(){
	int gd=DETECT,gm,i,j=100;

	clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(i=0;i<100;i++){
		cleardevice();
		bar(100+i,100,300+i,200);
		delay(100);
	}

	getch();
	closegraph();

	//getch();
}