#include <stdio.h>
#include <conio.h>

void main(){
	float x[] = {4.5,1.2,8.9,2.0},*p=x;
	int sz,i;

	clrscr();

	sz = sizeof(x)/sizeof(float);
	//printf("\t%d",sz);

	for(i=0;i<sz;i++){
		printf("\t%f",*p++);
		//printf("\t%f",*(p+i));
		//printf("\t%u",p+i);
		//printf("\t%u",p++);
	}
	//printf("\n\t%f",*p);



	//printf("\t%f",*p);
	//p++;
	//printf("\t%f",*p);


	getch();
}