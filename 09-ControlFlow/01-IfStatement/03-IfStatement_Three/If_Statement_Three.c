#include<stdio.h>
int main(void)
{
	//variable declarations
	int num_olp;

	//code 
	printf("\n");

	printf("Enter Value For 'num' : ");
	scanf("%d", &num_olp);

	if (num_olp < 0) {
		printf("NUM = %d Is Less Than 0 (NEGATIVE). \n ", num_olp);
	}
	if ((num_olp > 0) && (num_olp <= 100)) {
		printf("NUM = %d Is Between 0 ANd 100\n ", num_olp);
	}
	if ((num_olp > 100) && (num_olp <= 200)) {
		printf("NUM = %d Is Between 100 And 200. \n", num_olp);
	}
	if ((num_olp > 200) && (num_olp <= 300)) {
		printf("NUM = %d Is Between 200 And 300. \n", num_olp);
	}
	if ((num_olp > 300) && (num_olp <= 400)) {
		printf("NUM = %d Is Between 300 And 400. \n", num_olp);
	}
	if ((num_olp > 400) && (num_olp <= 500)) {
		printf("NUM = %d Is Between 400 And 500. \n ", num_olp);
	}
	if (num_olp > 500) {
		printf("NUM = %d Is Greater Than 500. \n ", num_olp);
	}

	return(0);

}