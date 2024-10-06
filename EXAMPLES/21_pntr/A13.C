#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	int y = 0;

	//Case 1:
	//char (*p)[6];

	//Case 2:
	char *p[6];

	clrscr();

	//Case 1:

	//printf("\t%d",sizeof(p));
	//scanf("%[A-Za-z ]",p);

	//printf("\n\t%s",p);

	//printf("\n\t%u",p);


	//Case 2:

	printf("\n%d\n",sizeof(p));

	p[0] = "mohan";
	p[1] = "ganesh";
	p[2] = "suresh";
	p[3] = "kartik";
	p[4] = "mukesh";
	p[5] = "sarwesh";

	for(y=0;y<6;y++){
		printf("\n%s",p[y]);
	}

	getch();
}













