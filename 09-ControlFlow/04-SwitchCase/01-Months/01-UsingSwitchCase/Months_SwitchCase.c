#include<stdio.h>
int main(void) {
	
	//variable declarations
	int num_months_olp;

	//code
	printf("\n\n");

	printf("Enter Number Of Months (1 to 12) : ");
	scanf("%d", &num_months_olp);

	printf("\n\n");

	switch (num_months_olp)
	{
	case 1:
		printf("Month Number %d Is JANUARY !!!\n\n", num_months_olp);
		break;
	case 2:
		printf("Month Number %d Is FEBRUARY !!!\n\n", num_months_olp);
		break;
	case 3:
		printf("Month Number %d Is MARCH !!!\n\n", num_months_olp);
		break;
	case 4:
		printf("Month Number %d Is APRIL !!!\n\n", num_months_olp);
		break;
	case 5:
		printf("Month Number %d Is MAY !!!\n\n", num_months_olp);
		break;
	case 6:
		printf("Month Number %d Is JUNE !!!\n\n", num_months_olp);
		break;
	case 7:
		printf("Month Number %d Is JULY !!!\n\n", num_months_olp);
		break;
	case 8:
		printf("Month Number %d Is AUGUST !!!\n\n", num_months_olp);
		break;
	case 9:
		printf("Month Number %d Is  SEPTEMBER!!!\n\n", num_months_olp);
		break;
	case 10:
		printf("Month Number %d Is OCTOBER !!!\n\n", num_months_olp);
		break;
	case 11:
		printf("Month Number %d Is NOVEMBER !!!\n\n", num_months_olp);
		break;
	case 12:
		printf("Month Number %d Is DECEMBER !!!\n\n", num_months_olp);
		break;
	default:
		printf("Invalid Month Number %d Entered !!! please Try Again...\n\n", num_months_olp);
		break;
	}
	printf("Switch Case Block Complete !!!\n");
	return (0);
}