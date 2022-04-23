#include<stdio.h>

#define NUM_ELEMENTS_OLP 10

int main(void) {

	//variable declarations
	int iArray_olp[NUM_ELEMENTS_OLP];
	int i_olp, num_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Elements For Array : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		scanf("%d", &num_olp);
		iArray_olp[i_olp] = num_olp;
	}
	printf("\n\n");
	printf("Even Numbers Amongst The Array Elements Are : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		if((iArray_olp[i_olp]%2)==0)
		printf("%d\n", iArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Odd Numbers Amongst The Array Elements Are : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_OLP; i_olp++) {
		if ((iArray_olp[i_olp] % 2) != 0)
			printf("%d\n", iArray_olp[i_olp]);

	}
	

	return (0);
}