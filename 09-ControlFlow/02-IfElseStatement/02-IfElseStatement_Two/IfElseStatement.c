#include<stdio.h>

int main(void) {

	//variable declarations 
	int age_olp;

	//code 
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &age_olp);
	printf("\n\n");
	if (age_olp >= 18) {
		printf("Entering if-block...\n\n");
		printf("You Are Eligible for Voting !!! \n\n");
	}
	else {
		printf("Entering else-block...\n\n");
		printf("You are NOT Eligible For Voting !!!\n\n");
	}
	printf("Bye !!!\n\n");
	return (0);
}