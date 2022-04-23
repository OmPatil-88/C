#include<stdio.h>
int main(void) {

	//variable declarations

	int i_olp, j_olp;

	//code
	printf("\n\n");
	for (i_olp = 1; i_olp <= 10; i_olp++) {
		printf("i = %d\n",i_olp);
		printf("--------\n\n");
		for (j_olp = 1; j_olp <= 5; j_olp++) {
			printf("\tj = %d\n", j_olp
			);
		}
		printf("\n\n");
	}
	return (0);
}