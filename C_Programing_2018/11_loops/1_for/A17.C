#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,f,y;
	char x;

	clrscr();

	printf("Enter a charcter: ");
	scanf("%c",&x);

	fflush(stdin);

	printf("Enter a number: ");
	scanf("%d",&n);

	if(x>=65&&x<=90){
		f = 1;
		//printf("\nUPPER");
	}else if(x>=97&&x<=122){
		f = 0;
		//printf("\nLOWER");
	}else{
		f = -1;
		//printf("\nINVALID");
	}

	y = f;
	//printf("\n%d",f);

	if(f!=-1){
		for(i=0;i<n;i++){
			if(y==1){
				if(f==1){
					printf("\n%c",x+i);
				}else{
					printf("\n%c",x+i-32);
				}
				y = 0;
			}else{
				if(f==1){
					printf("\n%c",x+i+32);
				}else{
					printf("\n%c",x+i);
				}
				y = 1;
			}
		}
	}

	getch();
}








