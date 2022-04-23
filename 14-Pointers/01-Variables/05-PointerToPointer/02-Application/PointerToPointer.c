#include<stdio.h>

int main(void) {

	//variable declarations
	int num_olp;
	int* ptr_olp;
	int** pptr_olp;
	
	//code
	num_olp = 10;

	printf("\n\n");

	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of num                = %d\n\n",num_olp);
	printf("Address Of 'num'            = %p\n\n",&num_olp);
	printf("Value At Address Of 'num'   = %d\n\n",*(&num_olp));

	ptr_olp = &num_olp;

	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of num                = %d\n\n", num_olp);
	printf("Address Of 'num'            = %p\n\n", ptr_olp);
	printf("Value At Address Of 'num'   = %d\n\n", *ptr_olp);

	pptr_olp = &ptr_olp;
	printf(" ****** AFTER pptr = &ptr ******\n\n");
	printf("Value Of num                              = %d\n\n", num_olp);
	printf("Address Of 'num'(ptr)                     = %p\n\n", ptr_olp);
	printf("Address Of 'ptr'(pptr)                    = %p\n\n", pptr_olp);
	printf("Value At Address Of 'ptr'(*pptr)          = %p\n\n", *pptr_olp);
	printf("Value At Address Of 'num'(*ptr)(**pptr)   = %d\n\n", **pptr_olp);
	
	return(0);
}