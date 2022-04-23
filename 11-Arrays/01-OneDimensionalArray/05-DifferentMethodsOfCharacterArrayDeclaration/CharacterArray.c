#include<stdio.h>

int main(void) {

	//variable declarations
	char chArray_01_olp[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P','\0' };
	char chArray_02_olp[9] = { 'W','E','L','C','O','M','E','S','\0'};
	char chArray_03_olp[] = { 'Y','O','U','\0' };

	char chArray_04_olp[] = "To";
	char chArray_05_olp[] = "REAL TIME RENDERING BATCH OF 2020-21";

	char chArray_WithoutNullTerminator_olp[] = { 'H','e','l','l','o' };

	//code
	printf("\n\n");
	printf("Size Of ChArray_01 : %lu\n\n", sizeof(chArray_01_olp));
	printf("Size Of ChArray_02 : %lu\n\n", sizeof(chArray_02_olp));
	printf("Size Of ChArray_03 : %lu\n\n", sizeof(chArray_03_olp));
	printf("Size Of ChArray_04 : %lu\n\n", sizeof(chArray_04_olp));
	printf("Size Of ChArray_05 : %lu\n\n", sizeof(chArray_05_olp));
	
	printf("\n\n");
	printf("The Strings Are : \n\n");
	printf("chArray_01 : %s\n\n",chArray_01_olp);
	printf("chArray_02 : %s\n\n", chArray_02_olp);
	printf("chArray_03 : %s\n\n", chArray_03_olp);
	printf("chArray_04 : %s\n\n", chArray_04_olp);
	printf("chArray_05 : %s\n\n", chArray_05_olp);
	
	printf("\n\n");
	printf("Size Of chArray_WithoutNullTerminator : %lu\n\n", sizeof(chArray_WithoutNullTerminator_olp));
	printf("chArray_WithoutNullTerminator : %s \n\n",chArray_WithoutNullTerminator_olp);
	return (0);
}