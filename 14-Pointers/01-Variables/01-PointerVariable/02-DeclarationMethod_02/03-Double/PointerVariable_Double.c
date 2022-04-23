#include<stdio.h>

int main(void) {

	//	variable declarations
	double num_olp;
	double* ptr_olp = NULL;

	//	code
	num_olp = 2.34343434f;

	printf("\n\n");

	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of 'num'           = %lf\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", &num_olp);
	printf("Value At Address Of 'num'= %lf\n\n", *(&num_olp));

	ptr_olp = &num_olp;

	printf("\n\n");

	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of 'num'           = %lf\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", ptr_olp);
	printf("Value At Address Of 'num'= %lf\n\n", *(ptr_olp));

	return (0);
}