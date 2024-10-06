#include <stdio.h>
#include <conio.h>

void main(){
	char *a[3];
	int sz,i;
	clrscr();

	//printf("\t%d",sizeof(a));
	//printf("\t%d",sizeof(long double));

	sz = sizeof(a)/sizeof(char*);
	//printf("\t%d",sz);


	for(i=0;i<sz;i++){
		scanf("%[A-Za-z ]",a[i]);
		fflush(stdin);
	}
	printf("\n\n+++++++++++++\n\n");

	for(i=0;i<sz;i++){
		printf("\n\t%s",a[i]);
	}

	getch();
}







