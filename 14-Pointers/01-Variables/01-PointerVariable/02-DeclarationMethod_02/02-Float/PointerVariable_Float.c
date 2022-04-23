#include<stdio.h>

int main(void) {

	//	variable declarations
	float num_olp;
	float* ptr_olp = NULL;

	//	code
	num_olp = 6.9f;

	printf("\n\n");

	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of 'Num'           = %f\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", &num_olp);
	printf("Value At Address Of 'num'= %f\n\n", *(&num_olp));

	ptr_olp = &num_olp;

	printf("\n\n");

	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of 'num'           = %f\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", ptr_olp);
	printf("Value At Address Of 'num'= %f\n\n", *(ptr_olp));

	return (0);
}
