#include<stdio.h>

int main(void) {

	//variable declarations
	float fArray_olp[10];
	float* ptr_fArray = NULL;
	int i_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) {
		fArray_olp[i_olp] = (float)(i_olp + 1) * 1.5f;
	}

	ptr_fArray = fArray_olp;

	printf("\n\n");
	printf("Elements Of The Float Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("fArray[%d] = %f\n", i_olp, *(ptr_fArray+i_olp));
	}

	printf("\n\n");
	printf("Elements Of The Float Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("fArray[%d] = %f \t\t Address =%p\n", i_olp, *(ptr_fArray + i_olp),(ptr_fArray + i_olp));
	}

	printf("\n\n");
	return (0);
}