#include<stdio.h>

int main(void) {

	//function prototype
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int a_olp;
	unsigned int b_olp;
	unsigned int result_olp;

	//code
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u,", &a_olp);

	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u,", &b_olp);

	printf("\n\n\n\n");
	result_olp = a_olp ^ b_olp;
	printf("Bitwise XOR-ing Of \n A = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal). \n\n", a_olp, b_olp, result_olp);

	PrintBinaryFormOfNumber(a_olp);
	PrintBinaryFormOfNumber(b_olp);
	PrintBinaryFormOfNumber(result_olp);

	return (0);
}

//THE ONLY OBJECTIVE OF WRITING THIS FUNCTION WAS TO OBTAIN THE BINARY REPRESENTATION OF DECIMAL INTEGERS SO THAT BIT-WISE AND-ing, OR-ing, COMPLEMENTAND BIT-SHIFTING COULD BE UNDERSTOOD WITH GREAT EASE

void PrintBinaryFormOfNumber(unsigned int decimal_number) {

	//variable declarations
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[32];
	int i;

	//code
	for (i = 0; i < 32; i++)
	binary_array[i] = 0;

	printf("The Binary Form Of The Decimal Integer %d Is \t=\t",decimal_number);
	num = decimal_number;
	i = 31;
	while (num != 0) {
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}

	for (i = 0; i < 32; i++) {
		if (i % 8 == 0) {
			printf(" ");
		}
		printf("%u", binary_array[i]);
	}
	printf("\n\n");
}