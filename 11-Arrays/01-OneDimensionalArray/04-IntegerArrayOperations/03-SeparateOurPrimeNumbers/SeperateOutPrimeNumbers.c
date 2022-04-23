#include<stdio.h>

#define NUM_ELEMENTS_OLP 10

int main(void) {

	//variable declarations
	int iArray_olp[NUM_ELEMENTS_OLP];
	int i_olp,j_olp,num_olp,count_olp=0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements For Array : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		scanf("%d", &num_olp);
		if (num_olp < 0) {
			num_olp = -1 * num_olp;
		}
		iArray_olp[i_olp] = num_olp;
	}
	printf("\n\n");
	printf("Array Elements Are : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		 printf("%d\n", iArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Prime Numbers Amongst The Array Elements Are : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		for (j_olp = 1; j_olp <= iArray_olp[i_olp]; j_olp++) {
			if ((iArray_olp[i_olp] % j_olp) == 0)
				count_olp++;
		}
		
		if (count_olp == 2) {
			printf("%d\n", iArray_olp[i_olp]);
		}
		count_olp = 0;
	}


	return (0);
}