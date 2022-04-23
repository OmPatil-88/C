#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//function prototype OR declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);

	//variable declarations
	int result_substraction_olp;
	int a_multiplication_olp, b_multiplication_olp;
	int a_division_olp, b_division_olp, result_division_olp;



	//code
	//Addition
	MyAddition(); //function call

	//Subtraction
	result_substraction_olp = MySubtraction();
	printf("\n\n");
	printf("Substraction Yields Result = %d\n", result_substraction_olp);

	//Multiplication
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Multiplication : ");
	scanf("%d", &a_multiplication_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B' For Multiplication : ");
	scanf("%d", &b_multiplication_olp);

	MyMultiplication(a_multiplication_olp, b_multiplication_olp);

	//Division
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Division : ");
	scanf("%d", &a_division_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B' For Division : ");
	scanf("%d", &b_division_olp);

	result_division_olp = MyDivision(a_division_olp, b_division_olp);
	printf("\n\n");

	printf("Division Of %d and %d Gives = %d (Quotient)\n", a_division_olp, b_division_olp, result_division_olp);

	printf("\n\n");

	return(0);

}

void MyAddition(void) {
	//variable declaration:Local variable
	int a_olp, b_olp, sum_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Addition : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B For Addition : ");
	scanf("%d", &b_olp);

	sum_olp = a_olp + b_olp;

	printf("\n\n");
	printf("Sum Of %d and %d = %d\n\n", a_olp, b_olp, sum_olp);
}

int MySubtraction(void) {

	//variable declaration :Local variable
	int a_olp, b_olp, subtraction_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Subtraction : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B For Subtraction : ");
	scanf("%d", &b_olp);

	subtraction_olp = a_olp - b_olp;
	return subtraction_olp;

}

void MyMultiplication(int a_olp, int b_olp) {

	//variable declaration :Local Variables
	int multiplication_olp;
	//code
	multiplication_olp = a_olp * b_olp;
	printf("\n\n");
	printf("Multiplication Of %d and %d = %d\n\n", a_olp, b_olp, multiplication_olp);
}

int MyDivision(int a_olp, int b_olp) {
	//variable declaration:Local variables
	int division_quotient_olp;

	//code
	if(a_olp>b_olp){
		division_quotient_olp = a_olp / b_olp;
	}
	else {
		division_quotient_olp = b_olp / a_olp;
	}

	return(division_quotient_olp);
}