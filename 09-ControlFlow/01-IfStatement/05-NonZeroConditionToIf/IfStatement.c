#include<stdio.h>
int main(void) {

	//variable declarations
	int a_olp;

	//code
	printf("\n\n");
	a_olp = 5;
	if (a_olp) {
		printf("if-block 1 : 'A' Exists And Has Value = %d !!!\n\n", a_olp);
	}
	a_olp = -5;
	if (a_olp) {
		printf("if-block 2 : 'A' Exists And Has  Value = %d !!!\n\n",a_olp);
	}

	a_olp = 0;
	if (a_olp) {
		printf("if-block 3 : 'A' Exists And Has Value = %d !!!\n\n", a_olp);
	}
	printf("All Three If-Statement are Done !!!\n\n");
	return (0);
}