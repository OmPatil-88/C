#include<stdio.h>

int main(void) {

	//variable declarations
	double dArray_olp[10];
	double* ptr_dArray = NULL;
	int i_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) {
		dArray_olp[i_olp] = (float)(i_olp + 1) * 1.33333f;
	}

	ptr_dArray = dArray_olp;

	printf("\n\n");
	printf("Elements Of The double Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("dArray[%d] = %lf\n", i_olp, *(ptr_dArray +i_olp));
	}

	printf("\n\n");
	printf("Elements Of The double Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("dArray[%d] = %lf \t\t Address =%p\n", i_olp, *(ptr_dArray + i_olp),(ptr_dArray + i_olp));
	}

	printf("\n\n");
	return (0);
}