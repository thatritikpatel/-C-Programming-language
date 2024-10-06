#include <stdio.h>
#include <conio.h>
void main(){
	FILE *fp;
	char *a;
	clrscr();

	fp = fopen("aa.txt","r");
	printf("%d\n",fp==NULL);
	while((a=gets(fp))!=NULL){
		printf("%s\n",a);
	}

	getch();
}