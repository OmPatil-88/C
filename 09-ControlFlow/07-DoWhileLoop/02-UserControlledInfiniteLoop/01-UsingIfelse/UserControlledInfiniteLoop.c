#include<stdio.h>
int main(void) {

	//variable declarations
	char option_olp, ch_olp = '\0';
	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins Enter 'Q' or 'q' To Quit The Infinite For loop : \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n\n");
	option_olp = getch();
	if (option_olp == 'Y' || option_olp == 'y') {
		do{
			printf("In Loop...\n");
			ch_olp = getch();
			if (ch_olp == 'Q' || ch_olp == 'q')
				break;
		} while (1);
		printf("\n\n");
		printf("EXITTING  USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}
	else {
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite Loop... Please Try Again...\n\n");
	}
	return (0);
	
}