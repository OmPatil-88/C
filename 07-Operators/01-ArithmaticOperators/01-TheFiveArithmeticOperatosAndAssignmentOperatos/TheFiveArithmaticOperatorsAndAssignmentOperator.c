#include<stdio.h>

int main(void) {

	//variable declaration
	int a_olp;
	int b_olp;
	int result_olp;

	//code
	printf("\n\n");
	printf("Enter A number : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &b_olp);

	printf("\n\n");

	// *** The Following Are The 5 Arithmetic Operators +,-,*,/ and % ****
	// *** Also, The Resultants Of The Arithmeti Operations in All The Below Five Cases Have Assigned To THE variable 'result' Using the Assignment Operator (=) ***
	result_olp = a_olp + b_olp;
	printf("Addition Of A = %d And B = %d Gives %d.\n", a_olp, b_olp, result_olp);

	result_olp = a_olp - b_olp;
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", a_olp, b_olp, result_olp);

	result_olp = a_olp * b_olp;
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", a_olp, b_olp, result_olp);

	result_olp = a_olp / b_olp;
	printf("Division Of A = %d And B = %d Gives Quetient %d.\n", a_olp, b_olp, result_olp);

	result_olp = a_olp % b_olp;
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", a_olp, b_olp, result_olp);

	printf("\n\n");

	return (0);
}