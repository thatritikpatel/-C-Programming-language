#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	int n,i=1,j=1;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(i<=n){
		while(j<=i){
			printf("* ");
			printf("%d~%d",i,j);
			delay(2000);
			printf("\b\b\b");
			j++;
		}
		j = 1;
		i++;
		printf("\n");
	}



	getch();
}





