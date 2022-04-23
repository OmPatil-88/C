#include<stdio.h>

int main(void) {

	//function declarations
	void MathematicalOperations_olp(int, int, int*, int*, int*, int*, int*);

	//variable declaration
	int a_olp;
	int b_olp;
	int answer_sum_olp;
	int answer_difference_olp;
	int answer_product_olp;
	int answer_quotient_olp;
	int asnwer_remainder_olp;

	//code
	printf("\n\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &b_olp);
	
	MathematicalOperations_olp(a_olp, b_olp, &answer_sum_olp, &answer_difference_olp, &answer_product_olp, &answer_quotient_olp, &asnwer_remainder_olp);
	printf("\n\n");
	printf("****** RESULTS ****** :\n\n");
	printf("Sum =%d\n\n", answer_sum_olp);
	printf("Difference =%d\n\n", answer_difference_olp);
	printf("Product =%d\n\n", answer_product_olp);
	printf("Quotient =%d\n\n",answer_quotient_olp);
	printf("Remainder =%d\n\n", asnwer_remainder_olp);

	return(0);
}

void MathematicalOperations_olp(int x_olp, int y_olp, int* sum_olp, int* difference_olp, int* product_olp, int* quotient_olp, int* remainder_olp) {
	
	*sum_olp = x_olp + y_olp;
	*difference_olp = x_olp - y_olp;
	*product_olp = x_olp * y_olp;;
	*quotient_olp = x_olp / y_olp;
	*remainder_olp = x_olp % y_olp;
}