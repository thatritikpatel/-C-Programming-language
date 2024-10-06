#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(){
	int gd=DETECT,gm,i,j=100;

	clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(i=0;i<100;i++){
		arc(200-j--,200+i,0,360,50+i);
		delay(100);
	}


	getch();
	closegraph();

	//getch();
}