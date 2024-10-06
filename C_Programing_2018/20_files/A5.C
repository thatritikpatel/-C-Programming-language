#include <stdio.h>
#include <conio.h>

void main(){
	FILE *fp;

	int marks;
	char name[12];
	float grade;

	clrscr();

	fp = fopen("aaa.txt","w");

	fprintf(fp,"%d %s %f",780,"sudesh",2.4567);

	fclose(fp);

	fp = fopen("aaa.txt","r");

	fscanf(fp,"%d %s %f",&marks,name,&grade);

	fclose(fp);

	printf("Your Name: %s\n",name);
	printf("Sore: %d and Grade: %f",marks,grade);

	getch();
}