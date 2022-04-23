#include<stdio.h>
int main(void) {

	//variable declarations
	int num_olp;
	//code
	printf("\n\n");
	printf("Enter Value For 'num' :");
	scanf("%d", &num_olp);

	if (num_olp < 0) {
		printf("Num = %d Is Less than 0 (NEGATIVE) !!!\n\n", num_olp);
	}
	else if ((num_olp > 0) && (num_olp <= 100)) {
		printf("Num = %d is Between 0 And 100 !!!\n\n", num_olp);
	}
	else if ((num_olp > 100) && (num_olp <= 200)) {
		printf("Num = %d is Between 100 And 200 !!!\n\n", num_olp);
	}
	else if ((num_olp > 200) && (num_olp <= 300)) {
		printf("Num = %d is Between 200 And 300 !!!\n\n", num_olp);
	}
	else if ((num_olp > 300) && (num_olp <= 400)) {
		printf("Num = %d is Between 300 And 400 !!!\n\n", num_olp);
	}
	else if ((num_olp > 400) && (num_olp <= 500)) {
		printf("Num = %d is Between 400 And 500 !!!\n\n", num_olp);
	}
	else if ((num_olp > 500)) {
		printf("Num = %d is Greater than 500 !!!\n\n", num_olp);
	}
	else {
		printf("Invalid Value Entered !!!\n\n");
	}
    
	return (0);
}