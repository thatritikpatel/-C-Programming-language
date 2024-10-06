#include <stdio.h>
#include <conio.h>

#define COMBINE(x,y)  printf("\t%d",x##y);
#define AAA(y,z) y##z

void main(){
	int a1=3,a2=4,AAA(a,3)=23;
	clrscr();

	if(0){
		COMBINE(a,1)
	}else{
		COMBINE(a,2)
	}

	printf("\n%d",a3);

	getch();
}




