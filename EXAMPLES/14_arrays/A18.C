#include <stdio.h>
#include <conio.h>

void main(){
	int x[10] = {12,13,14};
	int y[4] = {34,56,78,12};

	int sz1,sz2,i,j;

	clrscr();

	sz1 = sizeof(x)/sizeof(int);
	for(i=0;i<sz1;i++){
		if(x[i]==0){
			break;
		}
	}

	sz2 = sizeof(y)/sizeof(int);
	for(j=0;j<sz2;j++){
		x[i] = y[j];
		i++;
	}

	for(i=0;i<sz1;i++){
		printf("%d ",x[i]);
	}


	getch();
}