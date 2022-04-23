#include<stdio.h>
int main(void) {

	//variable declarations
	int num_months_olp;

	//code
	printf("\n\n");

	printf("Enter Number Of Months (1 to 12) : ");
	scanf("%d", &num_months_olp);

	printf("\n\n");
	if(num_months_olp== 1)
		printf("Month Number %d Is JANUARY !!!\n\n", num_months_olp);
	else if (num_months_olp == 2)
		printf("Month Number %d Is FEBRUARY !!!\n\n", num_months_olp);
	else if (num_months_olp == 3)
		printf("Month Number %d Is MARCH !!!\n\n", num_months_olp);
	else if (num_months_olp == 4)
		printf("Month Number %d Is APRIL !!!\n\n", num_months_olp);
	else if (num_months_olp == 5)
		printf("Month Number %d Is MAY !!!\n\n", num_months_olp);
	else if (num_months_olp == 6)
		printf("Month Number %d Is JUNE !!!\n\n", num_months_olp);
	else if (num_months_olp == 7)
		printf("Month Number %d Is JULY !!!\n\n", num_months_olp);
	else if (num_months_olp == 8)
		printf("Month Number %d Is AUGUST !!!\n\n", num_months_olp);
	else if (num_months_olp == 9)
		printf("Month Number %d Is  SEPTEMBER!!!\n\n", num_months_olp);
	else if (num_months_olp == 10)
		printf("Month Number %d Is OCTOBER !!!\n\n", num_months_olp);
	else if (num_months_olp == 11)
		printf("Month Number %d Is NOVEMBER !!!\n\n", num_months_olp);
	else if (num_months_olp == 12)
		printf("Month Number %d Is DECEMBER !!!\n\n", num_months_olp);
	else
	     printf("Invalid Month Number %d Entered !!! please Try Again...\n\n", num_months_olp);
	
	printf("If - Else If - Else Ladder Complete Complete !!!\n");
	return (0);
}