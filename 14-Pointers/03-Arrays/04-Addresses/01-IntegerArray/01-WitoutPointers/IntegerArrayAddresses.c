#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[10];
	int i_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) {
		iArray_olp[i_olp] = (i_olp + 1) * 3;
	}
	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("iArray[%d] = %d\n", i_olp, iArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("iArray[%d] = %d \t\t Address =%p\n", i_olp, iArray_olp[i_olp],&iArray_olp[i_olp]);
	}

	printf("\n\n");


	return (0);
}