#include<stdio.h>
int main(void) {

	//variable declarations
	char option_olp, ch_olp = '\0';
	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins Enter 'Q' or 'q' To Quit The Infinite For loop : \n\n");
	
	do {
		do{
			printf("\n");
			printf("In Loop...\n");
			ch_olp = getch();
		} while (ch_olp != 'Q' && ch_olp != 'q');
		printf("\n\n");
		printf("EXITTING  USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
		printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN?...(Y/y-Yes,Any Other Key - No) :");
			option_olp = getch();
	}while(option_olp == 'Y' || option_olp == 'y');
	return (0);
	
}