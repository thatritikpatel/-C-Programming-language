#include <stdio.h>
#include <conio.h>

void main(){
	char language;
	char service;

	clrscr();

	printf("Enter Language(H/E/T): ");
	scanf("%c",&language);

	fflush(stdin);

	switch(language){
		case 'H':
			printf("Enter Service: for Landline(L) and for Broadband(B): ");
			scanf("%c",&service);
			switch(service){
				case 'L':
					printf("\nYou chose Landline Connection");
					break;
				case 'B':
					printf("\nYou chose Broadband Connection");
					break;
				default:
					printf("\nInvalide Service Selection");
			}
			break;
		case 'E':
			printf("\nEnter Servie: for Mobile(M) and for Smartphone(S): ");
			scanf("%c",&service);
			switch(service){
				case 'M':
					printf("\nYou chose Mobile");
					break;
				case 'S':
					printf("\nYou chose Smart Phone");
					break;
				default:
					printf("\nInvalid Service Selection");
			}
			break;
		case 'T':
			printf("\nYou selected Telagu");
			break;
		default:
			printf("\nInvalid Language Selection");
	}

	getch();
}









