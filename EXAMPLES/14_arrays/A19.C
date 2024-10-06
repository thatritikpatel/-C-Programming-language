#include <stdio.h>
#include <conio.h>

void main(){
	//Case 1:
	//int x[10] = {12,13,14,15};
	//int y[] = {1,2,3};

	//Case 2:
	//int x[10] = {12,13};
	//int y[] = {1,2,3,4};

	int n,i,j=0,sz1,sz2;

	clrscr();

	sz1 = sizeof(x)/sizeof(int);
	sz2 = sizeof(y)/sizeof(int);

	printf("Enter a number(0,1): ");
	scanf("%d",&n);

	for(i=0;i<sz1;i++){
		if(x[i+1]==0){
			break;
		}
	}

	for(j=i;j>=0;j--){
		if(j>=n){
			x[j+sz2] = x[j];
		}else{
			break;
		}
	}

	j++;
	for(i=0;i<sz2;i++){
		x[j] = y[i];
		j++;
	}

	for(i=0;i<sz1;i++){
		printf("%d ",x[i]);
	}

	getch();
}







