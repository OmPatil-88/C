#include<stdio.h>
int main(void) {

	//Variable declarations
	int a_olp, b_olp, p_olp;

	//code
	a_olp = 9;
	b_olp = 30;
	p_olp = 30;

	printf("\n\n");
	if (a_olp < b_olp) {
		printf("Entering First if-block...\n\n");
		printf("A Is Less Than B !!!\n\n");
	}
	else {
		printf("Entering First else-block...\n\n");
		printf("A is NOT Less Than B !!!\n\n");
	}
	printf("First if-else Pair Done !!! \n\n");

	printf("\n\n");
	if (b_olp != p_olp) {
		printf("Entering Second if-block...\n\n");
		printf("B is Not Equal to P !!!\n\n");
	}
	else {
		printf("Entering Second else-block...\n\n");
		printf("B Is Equal To p !!!\n\n");
	}
	printf("Second if-else Pair Done !!!\n\n");
    
	return (0);
}