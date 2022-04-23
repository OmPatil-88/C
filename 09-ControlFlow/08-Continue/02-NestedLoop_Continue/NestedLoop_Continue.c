#include<stdio.h>
int main(void) {

	//variable declarations
	int i_olp,j_olp;

	//code
	printf("\n\n");

	printf("Outer Loop Prints Odd numbers Between 1 and  10. \n\n");
	printf("Inner Loop Prints Even Numbers Between 1 and 10 For every Odd Number Printed By Outer Loop \n\n");

	for (i_olp = 0; i_olp <= 100; i_olp++) {
		if (i_olp % 2 != 0) {
			printf("i = %d\n", i_olp);
			printf("---------\n");
			for (j_olp = 1; j_olp <= 10; j_olp++) {
				if (j_olp % 2 == 0) {
					printf("\tj = %d\n", j_olp);
				}
				else {
					continue;
				}
			}
		}
		else {
	
			continue;
			
		}
	}
	printf("\n\n");
	return (0);
}