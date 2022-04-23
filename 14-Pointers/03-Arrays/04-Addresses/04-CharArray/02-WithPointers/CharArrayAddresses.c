#include<stdio.h>

int main(void) {

	//variable declarations
	char cArray_olp[10];
	char *ptr_cArray = NULL;
	int i_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) {
		cArray_olp[i_olp] = (char)(i_olp + 65);
	}

	ptr_cArray = cArray_olp;

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("cArray[%d] = %c\n", i_olp, *(ptr_cArray +i_olp));
	}

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (i_olp=0; i_olp < 10; i_olp++) {
		printf("cArray[%d] = %c \t\t Address =%p\n", i_olp, *(ptr_cArray + i_olp),(ptr_cArray + i_olp));
	}

	printf("\n\n");


	return (0);
}