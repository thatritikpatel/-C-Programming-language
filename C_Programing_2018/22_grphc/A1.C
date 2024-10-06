#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
	int gd=DETECT,gm,i,j;
	//clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	//arc(200,200,0,270,100);


	for(i=0,j=100;i<100;i++,j--){
		arc(200+j,200+i,0,360,50+i);
		delay(100);
	}

	getch();
	closegraph();
}







