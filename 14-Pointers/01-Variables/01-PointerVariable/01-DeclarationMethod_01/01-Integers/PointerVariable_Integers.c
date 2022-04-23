#include<stdio.h>

int main(void) {

	//	variable declarations
	int num_olp;
	int *ptr_olp=NULL;

	//	code
	num_olp = 10;

	printf("\n\n");

	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of 'Num'           = %d\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", &num_olp);
	printf("Value At Address Of 'num'= %d\n\n", *(&num_olp));

	ptr_olp = &num_olp;

	printf("\n\n");

	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of 'num'           = %d\n\n", num_olp);
	printf("Address Of 'num'         = %p\n\n", ptr_olp);
	printf("Value At Address Of 'num'= %d\n\n", *(ptr_olp));

	return (0);
}