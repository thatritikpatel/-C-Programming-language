#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char name[30];
	char *s;

	clrscr();

	printf("Enter your name: ");

	/*
	scanf("%[A-Za-z ]",name);
	printf("\nname: %s",name);
	printf("\nArr length: %d",sizeof(name));
	printf("\nString length: %d",strlen(name));
	*/

	scanf("%[A-Za-z ]",s);

	//printf("\n\t%d - %d - %s",sizeof(s),strlen(s),s);

	printf("%s\n%s\n%s\n",s+0,s+1,s+2);
	printf("%u\t%u\t%u",s+0,s+1,s+2);
	printf("\n%c",s); //NOT OK

	printf("\n----\n");
	printf("%c",*s);
	printf("\n%c",s[0]);

	printf("\n\n%c%c%c",*(s+0),*(s+1),*(s+2));

	getch();
}









