#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;
	int c;
	clrscr();

	fp = fopen("abc.txt","w");

	putw(12,fp);
	putw(342,fp);
	putw(78,fp);

	fclose(fp);

	fp = fopen("abc.txt","r");

	//Case 1:
	/*
	c = getw(fp);
	printf("---%d---",c);
	*/

	//Case 2:

	while((c=getw(fp))!=EOF){
		printf("%d-",c);
	}

	getch();
}









