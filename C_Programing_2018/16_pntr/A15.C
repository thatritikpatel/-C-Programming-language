#include <stdio.h>
#include <conio.h>

char* strcon(char *x,char *y){
	char *tmp = x;
	printf("\t");


	while(*tmp!='\0'){
		//printf("%c",*tmp);
		//printf("%u-%u\n\t",x,tmp);
		tmp++;
	}
	printf("\n\t");

	while(*y!='\0'){
		//printf("%u-%u\n\t",tmp,y);
		//printf("%c",*y);
		*tmp = *y;
		tmp++;
		y++;
	}

	//*tmp = '\0';

	//printf("\t%s",x);

	return x;
}

void main(){
	char a[30] = "mohan";
	char b[10] = "kumar";
	char *t;

	clrscr();

	t = strcon(a,b);

	printf("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n\t##%s",a);
	printf("\n~~~~~~~~~~~~~~~~~~~~\n");

	getch();
}




