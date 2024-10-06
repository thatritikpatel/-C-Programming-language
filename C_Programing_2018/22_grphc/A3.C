#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
	int gd=DETECT,gm,i,j=1;

	clrscr();

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(i=0;i<151;i++){
		if(i%10==0){
			setcolor(j++);
		}
		arc(200,200,0,360,50+i);
		delay(100);
	}


	getch();
	closegraph();

	//getch();
}