#include <stdio.h>
#include <conio.h>

void main(){
	int x[] = {23,2,67,54,78,2,43};
	int even=0,odd=0;
	int i,size;

	clrscr();

	size = sizeof(x)/sizeof(int);

	for(i=0;i<size;i++){
		if(x[i]%2==0){
			even++;
			printf("%d - even\n",x[i]);
		}else{
			odd++;
			printf("%d - odd\n",x[i]);
		}
	}

	printf("\neven: %d and odd: %d",even,odd);

	getch();
}