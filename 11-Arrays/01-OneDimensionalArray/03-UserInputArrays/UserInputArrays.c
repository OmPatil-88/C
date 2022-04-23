#include<stdio.h>

#define INT_ARRAY_NUM_ELEMENTS_OLP 5
#define FLOAT_ARRAY_NUM_ELEMENTS_OLP 3
#define CHAR_ARRAY_NUM_ELEMENTS_OLP 15

int main(void) {

	//variable declarations
	int iArray_olp[INT_ARRAY_NUM_ELEMENTS_OLP];
	float fArray_olp[FLOAT_ARRAY_NUM_ELEMENTS_OLP];
	char cArray_olp[CHAR_ARRAY_NUM_ELEMENTS_OLP];
	int i_olp, num_olp;

	//code
	//************ ARRAY ELEMENTS INPUT ********

	printf("\n\n");
	printf("Enter Elements For 'Integer' Array : \n");
	for (i_olp = 0; i_olp < INT_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		scanf("%d", &iArray_olp[i_olp]);
	}

	printf("Enter Elements For 'Floating-Point' Array : \n");
	for (i_olp = 0; i_olp < FLOAT_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		scanf("%f", &fArray_olp[i_olp]);
	}

	printf("Enter Elements For 'Character' Array : \n");
	for (i_olp = 0; i_olp < CHAR_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		cArray_olp[i_olp] = getch();
		printf("%c\n", cArray_olp[i_olp]);
	}

	//************ ARRAY ELEMENTS OUTPUT ********

	printf("\n\n");
	printf("Integer Array Entered by You : \n\n");
	for (i_olp = 0; i_olp < INT_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		printf("%d\n", iArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Floating-Point Array Entered by You : \n\n");
	for (i_olp = 0; i_olp < FLOAT_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		printf("%f\n", fArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Character Array Entered by You : \n\n");
	for (i_olp = 0; i_olp < CHAR_ARRAY_NUM_ELEMENTS_OLP; i_olp++) {
		printf("%c\n",cArray_olp[i_olp]);
	}
	return (0);
}