#include<stdio.h>

int main(void) {

	//variable declarations
	double dArray_olp[10];
	int i_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) {
		dArray_olp[i_olp] = (float)(i_olp + 1) * 1.333333f;
	}
	printf("\n\n");
	printf("Elements Of The double Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("dArray_olp[%d] = %lf\n", i_olp, dArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Elements Of The double Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("dArray_olp[%d] = %lf \t\t Address =%p\n", i_olp, dArray_olp[i_olp],&dArray_olp[i_olp]);
	}

	printf("\n\n");


	return (0);
}