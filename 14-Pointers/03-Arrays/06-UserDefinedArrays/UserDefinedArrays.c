#include<stdio.h>
#include<stdlib.h>

#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void) {

	//variable declarations
	int* ptr_iArray_olp = NULL;
	unsigned int intArrayLength_olp = 0;

	float* ptr_fArray_olp = NULL;
	unsigned int floatArrayLength_olp = 0;

	double* ptr_dArray_olp = NULL;
	unsigned int doubleArrayLength_olp = 0;

	char* ptr_cArray_olp = NULL;
	unsigned int charArrayLength_olp = 0;

	int i_olp;

	//code
	// ******* INTEGER ARRAY ******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want in The Integer Array : \n");
	scanf("%u", &intArrayLength_olp);

	ptr_iArray_olp = (int*)malloc(INT_SIZE * intArrayLength_olp);
	if (ptr_iArray_olp == NULL) {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED\n");
	}

	printf("\n\n");
	printf("Enter The %d Integr Elements TO Fill Up The Integer Array :\n", intArrayLength_olp);
	for (i_olp = 0; i_olp < intArrayLength_olp; i_olp++) {
		scanf("%d", (ptr_iArray_olp + i_olp));
	}
	
	// ****** FLOAT ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'Float' Array :\n");
	scanf("%u", &floatArrayLength_olp);

	ptr_fArray_olp = (float*)malloc(FLOAT_SIZE * floatArrayLength_olp);
	if (ptr_fArray_olp == NULL) {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR Float ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR Float ARRAY SUCCEEDED\n");
	}

	printf("\n\n");
	printf("Enter The %d Floating-Point Elements To Fill Up The Float Array :\n\n",floatArrayLength_olp);
	for (i_olp = 0; i_olp < floatArrayLength_olp; i_olp++) {
		scanf("%f", (ptr_fArray_olp + i_olp));
	}

	// ****** DOUBLE ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want in 'double' Array : \n");
	scanf("%u", &doubleArrayLength_olp);

	ptr_dArray_olp = (double*)malloc(DOUBLE_SIZE * doubleArrayLength_olp);
	if (ptr_dArray_olp == NULL) {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR double ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR double ARRAY SUCCEEDED\n\n");
	}

	printf("\n\n");
	printf("Enter The %d double Elements To Fill Up The double Array :\n\n", doubleArrayLength_olp);
	for (i_olp = 0; i_olp < doubleArrayLength_olp; i_olp++) {
		scanf("%lf", (ptr_dArray_olp + i_olp));
	}

	// ****** CHAR ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want in 'character' Array : ");
	scanf("%u", &charArrayLength_olp);

	ptr_cArray_olp = (char*)malloc(CHAR_SIZE * charArrayLength_olp);
	if (ptr_cArray_olp == NULL) {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR character ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR character ARRAY SUCCEEDED\n");
	}

	printf("\n\n");
	printf("Enter The %d character Elements To Fill Up The character Array :\n\n", charArrayLength_olp);
	for (i_olp = 0; i_olp < charArrayLength_olp; i_olp++) {
		*(ptr_cArray_olp + i_olp) = getch();
		printf("%c", *(ptr_cArray_olp + i_olp));
	}

	//******************Displaying Of Arrays*******************
	//******************INTEGER ARRAY ***********
	printf("\n\n");
	printf("The Integer Array Entered By You,Consisting Of %d Elements :\n\n", intArrayLength_olp);
	for (i_olp = 0; i_olp < intArrayLength_olp; i_olp++) {
		printf("%d \t\t At Address : %p\n",*(ptr_iArray_olp+i_olp),(ptr_iArray_olp+i_olp));
	}

	//******************FLOAT ARRAY ***********
	printf("\n\n");
	printf("The Floating-Point Array Entered By You,Consisting Of %d Elements :\n\n", floatArrayLength_olp);
	for (i_olp = 0; i_olp < floatArrayLength_olp; i_olp++) {
		printf("%f \t\t At Address : %p\n", *(ptr_fArray_olp + i_olp), (ptr_fArray_olp + i_olp));
	}

	//******************DOUBLE ARRAY ***********
	printf("\n\n");
	printf("The Double Array Entered By You,Consisting Of %d Elements :\n\n", doubleArrayLength_olp);
	for (i_olp = 0; i_olp < doubleArrayLength_olp; i_olp++) {
		printf("%lf \t\t At Address : %p\n", *(ptr_dArray_olp + i_olp), (ptr_dArray_olp + i_olp));
	}
	//******************CHARACTER ARRAY ***********
	printf("\n\n");
	printf("The Character Array Entered By You,Consisting Of %d Elements :\n\n",charArrayLength_olp);
	for (i_olp = 0; i_olp < charArrayLength_olp; i_olp++) {
		printf("%c \t\t At Address : %p\n", *(ptr_cArray_olp + i_olp), (ptr_cArray_olp + i_olp));
	}

	// ******** FREEING MEMORY OCCUPIED BY ARRAYS (In REVERSE ORDER OF ALLOCATION) *******
	if (ptr_cArray_olp) {
		free(ptr_cArray_olp);
		ptr_cArray_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCARED FOR CHARACTER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (ptr_dArray_olp) {
		free(ptr_dArray_olp);
		ptr_dArray_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCARED FOR DOUBLE ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (ptr_fArray_olp) {
		free(ptr_fArray_olp);
		ptr_fArray_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCARED FOR FLOAT ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (ptr_iArray_olp) {
		free(ptr_iArray_olp);
		ptr_iArray_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCARED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	
	
	return(0);
}