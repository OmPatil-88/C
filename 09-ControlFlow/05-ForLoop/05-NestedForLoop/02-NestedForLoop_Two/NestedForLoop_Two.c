#include<stdio.h>
int main(void) {

	//variable declarations

	int i_olp, j_olp,k_olp;

	//code
	printf("\n\n");
	for (i_olp = 1; i_olp <= 10; i_olp++) {
		printf("i = %d\n", i_olp);
		printf("--------\n\n");
		for (j_olp = 1; j_olp <= 5; j_olp++) {
			printf("\tj = %d\n", j_olp);
			printf("\t--------\n\n");
			for (k_olp = 1; k_olp <= 3; k_olp++) {
				printf("\t\tk = %d\n", k_olp);
			}
			printf("\n\n");
		}
		printf("\n\n");
	}
	return (0);
}