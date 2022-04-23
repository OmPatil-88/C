#include<stdio.h>
int main(void) {

	//variable declarations
	int i_olp;

	//code
	printf("\n\n");

	printf("Printing Even Numbers From 0 to 100: \n\n");

	for (i_olp = 0; i_olp <= 100; i_olp++) {
		if (i_olp % 2 != 0) {
			continue;
		}
		else {
			printf("\t%d\n", i_olp);
		}
	}
	printf("\n\n");
	return (0);
}