#include<stdio.h>

enum {
	NEGATIVE = -1,
    ZERO,
	POSITIVE
};

int main(void) {

	//function declarations
	int Difference_olp(int, int, int*);

	//variable declaration
	int a_olp;
	int b_olp;
	int answer_olp, ret_olp;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b_olp);

	ret_olp = Difference_olp(a_olp, b_olp, &answer_olp);

	printf("\n\n");
	printf("The Difference Of %d And %d =%d \n\n", a_olp, b_olp, answer_olp);

	if (ret_olp == POSITIVE) {
		printf("The Difference Of %d And %d Is Positive !!!\n\n", a_olp, b_olp);
	}
	else if (ret_olp == NEGATIVE) {
		printf("The Difference Of %d And %d Is Negative !!!\n\n", a_olp, b_olp);
	}
	else {
		printf("The Difference Of %d And %d Is Zero !!!\n\n", a_olp, b_olp);
	}
	return (0);
}

int Difference_olp(int x_olp, int y_olp, int* diff_olp) {

	//code
	*diff_olp = x_olp - y_olp;
	if (*diff_olp > 0) {
		return (POSITIVE);
	}
	else if (*diff_olp < 0) {
		return (NEGATIVE);
	}
	else {
		return ZERO;
	}
}
