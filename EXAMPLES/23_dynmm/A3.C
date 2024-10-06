#include <stdio.h>
#include <conio.h>

struct student{
	char name[50];
	int marks;
};

void main(){
	struct student *b;
	int n,i,m;
	clrscr();

	printf("Insert student count: ");
	scanf("%d",&n);
	b = (struct student*)malloc(sizeof(struct student)*n);
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\nEnter your name: ");
		scanf("%s",(b+i)->name);
		fflush(stdin);
		printf("\nEnter your marks: ");
		scanf("%d",&((b+i)->marks));
	}

	printf("\n\n");
	for(i=0;i<n;i++){
		printf("\n%s - %d",(b+i)->name,(b+i)->marks);
		//printf("\n%s - %d",b[i].name,b[i].marks);
	}

	printf("\nhow many more students you want to add: ");
	scanf("%d",&m);
	b = (struct student*)realloc(b,sizeof(struct student)*(m+n));
	for(i=0;i<m;i++){
		fflush(stdin);
		printf("\nEnter your name: ");
		scanf("%s",(b+n+i)->name);
		fflush(stdin);
		printf("\nEnter your marks: ");
		scanf("%d",&((b+n+i)->marks));
	}


	printf("\n\n");
	for(i=0;i<n+m;i++){
		printf("\n%s - %d",(b+i)->name,(b+i)->marks);
	}
	printf("\n\n\n\n\n\n");

	free(b);

	printf("\n\n");
	for(i=0;i<n+m;i++){
		printf("\n%s - %d",(b+i)->name,(b+i)->marks);
	}

	printf("\n\n\n\n\n\n");

	getch();
}