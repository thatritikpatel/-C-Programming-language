#include <stdio.h>
#include <conio.h>


int alnumHai(char x){
	int flag = 0;

	if(x>='A'&&x<='Z'||x>='0'&&x<='9'||x>='a'&&x<='z'){
		flag = 1;
	}

	return flag;
}


void main(){
	char c;
	int i;

	clrscr();

	printf("Enter a character: ");
	scanf("%c",&c);

	printf("%d",alnumHai(c));

	/*
	for(i='A';i<'A'+26;i++){
		printf("%c-%d\t",i,i);
	} */

	//i = 'A'+26-1;
	//printf("%c-%d",i,i);

	getch();
}








