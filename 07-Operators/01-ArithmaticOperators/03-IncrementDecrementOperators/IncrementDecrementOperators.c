#include<stdio.h>

int main(void) {

	//variable declarations
	int a_olp = 5;
	int b_olp = 10;

	//code 
	printf("\n\n");
	printf("A   = %d \n", a_olp);
	printf("A++ = %d \n", a_olp++);
	printf("A   = %d \n", a_olp);
	printf("++A = %d \n", ++a_olp);

	printf("B   = %d \n", b_olp);
	printf("B-- = %d \n", b_olp--);
	printf("B   = %d \n", b_olp);
	printf("--B = %d \n", --b_olp);

	return (0);
}