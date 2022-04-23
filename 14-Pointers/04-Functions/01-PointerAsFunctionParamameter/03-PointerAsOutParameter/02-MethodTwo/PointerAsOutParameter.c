#include<stdio.h>

int main(void) {

	//function declarations
	void MathematicalOperations_olp(int, int, int*, int*, int*, int*, int*);

	//variable declaration
	int a_olp;
	int b_olp;
	int *answer_sum_olp=NULL;
	int *answer_difference_olp=NULL;
	int *answer_product_olp=NULL;
	int *answer_quotient_olp=NULL;
	int *asnwer_remainder_olp=NULL;

	//code
	printf("\n\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &b_olp);
	
	answer_sum_olp = (int*)malloc(1 * sizeof(int));
	if (answer_sum_olp == NULL) {
		printf("Could Not Allocate Memory For 'answer_sum' Exitting Now...\n");
		exit(0);
	}
	answer_difference_olp = (int*)malloc(1 * sizeof(int));
	if (answer_difference_olp == NULL) {
		printf("Could Not Allocate Memory For 'answer_difference_olp' Exitting Now...\n");
		exit(0);
	}
	answer_product_olp = (int*)malloc(1 * sizeof(int));
	if (answer_product_olp == NULL) {
		printf("Could Not Allocate Memory For 'answer_product_olp' Exitting Now...\n");
		exit(0);
	}
	answer_quotient_olp = (int*)malloc(1 * sizeof(int));
	if (answer_quotient_olp == NULL) {
		printf("Could Not Allocate Memory For 'answer_quotient_olp' Exitting Now...\n");
		exit(0);
	}
	asnwer_remainder_olp = (int*)malloc(1 * sizeof(int));
	if (asnwer_remainder_olp == NULL) {
		printf("Could Not Allocate Memory For 'asnwer_remainder_olp' Exitting Now...\n");
		exit(0);
	}

	MathematicalOperations_olp(a_olp, b_olp,answer_sum_olp,answer_difference_olp, answer_product_olp, answer_quotient_olp, asnwer_remainder_olp);
	printf("\n\n");
	printf("****** RESULTS ****** :\n\n");
	printf("Sum =%d\n\n", *answer_sum_olp);
	printf("Difference =%d\n\n", *answer_difference_olp);
	printf("Product =%d\n\n", *answer_product_olp);
	printf("Quotient =%d\n\n",*answer_quotient_olp);
	printf("Remainder =%d\n\n", *asnwer_remainder_olp);

	if (asnwer_remainder_olp) {
		free(asnwer_remainder_olp);
		asnwer_remainder_olp = NULL;
		printf("Memory Allocated For 'answer_remainder' Successfully Freed \n\n");
	}
    
	if (answer_quotient_olp) {
		free(answer_quotient_olp);
		answer_quotient_olp = NULL;
		printf("Memory Allocated For 'answer_quotient_olp' Successfully Freed \n\n");
	}

	if (answer_product_olp) {
		free(answer_product_olp);
		answer_product_olp = NULL;
		printf("Memory Allocated For 'answer_product_olp' Successfully Freed \n\n");
	}
	if (answer_difference_olp) {
		free(answer_difference_olp);
		answer_difference_olp = NULL;
		printf("Memory Allocated For 'answer_difference_olp' Successfully Freed \n\n");
	}
	if (answer_sum_olp) {
		free(answer_sum_olp);
		answer_sum_olp = NULL;
		printf("Memory Allocated For 'answer_sum_olp' Successfully Freed \n\n");
	}




	return(0);
}

void MathematicalOperations_olp(int x_olp, int y_olp, int* sum_olp, int* difference_olp, int* product_olp, int* quotient_olp, int* remainder_olp) {
	
	*sum_olp = x_olp + y_olp;
	*difference_olp = x_olp - y_olp;
	*product_olp = x_olp * y_olp;;
	*quotient_olp = x_olp / y_olp;
	*remainder_olp = x_olp % y_olp;
}