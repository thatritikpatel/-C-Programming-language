#include <stdio.h>
#include <conio.h>

struct abc{
	int p;
	int *q;
}x[2],*a;


void main(){
	clrscr();

	x[0].p = 12;
	x[0].q = &x[0].p;

	x[1].p = 23;
	x[1].q = &x[1].p;

	a = &x[0];

	//printf("\t%d",*a->q);
	//printf("\t%d",++*a->q);

	//printf("\t%d",*a++->q);
	//printf("\t%d",*a->q);

	//printf("\t%d",a->*q);//---x
	//printf("\t%d",a->++p);//---x
	//printf("\t%d",a->(p++));//---x


	//printf("\n\t%d",++a->p);

	//printf("\t%d",a->(p++));//----NOTOK
	//printf("\t%d",a->p++);
	//printf("\n\t%d",a->p);


	//printf("\t%d",(a++)->p);
	//printf("\n\t%d",a->p);

	//printf("\t%d",(a->p)++);
	//printf("\t%d",a->p);

	//printf("\t%d",++(a->p));

	//printf("\t%d",a->(++p)); //----NOT OK

	//printf("\t%d",++a->p);
	//printf("\n\t%d",a->p);

	//printf("\t%d",a->p++);
	//printf("\n\t%d",a->p);

	//printf("\t%d",a++->p);
	//printf("\n\t%d",a->p);

	//printf("\t%d",*x[0].q);


	getch();
}






