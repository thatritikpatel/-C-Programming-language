#include <stdio.h>
#include <conio.h>

void main(){
	int x[3];
	int i;

	clrscr();

	for(i=0;i<3;i++){
		printf("%d\n",x[i]);
	}

	for(i=0;i<3;i++){
		scanf("%d",&x[i]);
		fflush(stdin);
	}

	printf("\n#######################\n");

	for(i=0;i<3;i++){
		printf("%d\n",x[i]);
	}

	getch();
}