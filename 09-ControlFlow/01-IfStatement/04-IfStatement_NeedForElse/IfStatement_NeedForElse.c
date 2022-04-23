#include<stdio.h>

int main(void) {

	//variable declarations
	int age_olp;

	//code
	printf("\n\n");
	printf("Enter Age :");
	scanf("%d", &age_olp);
	if (age_olp >= 18) {
		printf("You are Eligible For Voting !!!\n\n");
	}
	printf("You Are NOT Eligible For Voting !!!\n\n");
	return (0);
}