#include<stdio.h>

int main(void) {

	//	variable declarations
    char ch_olp;
	char* ptr_olp = NULL;

	//	code
	ch_olp = 'A';

	printf("\n\n");

	printf(" ****** BEFORE ptr = &ch ******\n\n");
	printf("Value Of 'ch'           = %c\n\n", ch_olp);
	printf("Address Of 'ch'         = %p\n\n", &ch_olp);
	printf("Value At Address Of 'ch'= %c\n\n", *(&ch_olp));

	ptr_olp = &ch_olp;

	printf("\n\n");

	printf(" ****** AFTER ptr = &ch ******\n\n");
	printf("Value Of 'ch'           = %c\n\n", ch_olp);
	printf("Address Of 'ch'         = %p\n\n", ptr_olp);
	printf("Value At Address Of 'ch'= %c\n\n", *(ptr_olp));

	return (0);
}