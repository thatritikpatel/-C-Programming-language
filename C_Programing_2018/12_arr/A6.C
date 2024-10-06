#include <stdio.h>
#include <conio.h>

void main(){
	int i,x[5],size;
	float y[3];

	clrscr();

	//Case 2:
	/*
	size = sizeof(y)/sizeof(float);

	for(i=0;i<size;i++){
		scanf("%f",&y[i]);
	}

	printf("\n#############\n");

	for(i=0;i<size;i++){
		printf("%f ",y[i]);
	} */

	//Case 1:
	/*
	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		scanf("%d",&x[i]);
		fflush(stdin);
	}

	printf("\n~~~~~~~~~~~~~~\n");

	for(i=0;i<size;i++){
		printf("%d ",x[i]);
	}*/


	getch();
}