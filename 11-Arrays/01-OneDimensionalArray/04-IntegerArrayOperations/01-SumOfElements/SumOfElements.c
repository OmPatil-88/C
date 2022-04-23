#include<stdio.h>

#define NUM_ELEMENTS_OLP 10

int main(void) {

	//variable declarations
	int iArray_olp[NUM_ELEMENTS_OLP];
	int i_olp, num_olp, sum_olp = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements For Array : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		scanf("%d", &num_olp);
		iArray_olp[i_olp] = num_olp;
	}
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		sum_olp = sum_olp + iArray_olp[i_olp];
	}
	printf("\n\n");
	printf("Sum Of All Elements Of Array  = %d \n\n", sum_olp);

	return (0);
}