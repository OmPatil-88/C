#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[] = {12,24,36,48,60,72,84,96,108,120};
	float fArray_olp[] = {9.8f,8.7f,7.6f,6.5f,5.4f};
	double dArray_olp[] = { 1.22222,2.33333,3.44444 };
	char cArray_olp[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P','\0' };

	//code

	printf("\n\n");
	printf("Integer Array Elements And The Addresses They Occupy Are As Follows :\n\n");
	printf("iArray[0] = %d \t At Address : %p\n", *(iArray_olp + 0), (iArray_olp + 0));
	printf("iArray[1] = %d \t At Address : %p\n", *(iArray_olp + 1), (iArray_olp + 1));
	printf("iArray[2] = %d \t At Address : %p\n", *(iArray_olp + 2), (iArray_olp + 2));
	printf("iArray[3] = %d \t At Address : %p\n", *(iArray_olp + 3), (iArray_olp + 3));
	printf("iArray[4] = %d \t At Address : %p\n", *(iArray_olp + 4), (iArray_olp + 4));
	printf("iArray[5] = %d \t At Address : %p\n", *(iArray_olp + 5), (iArray_olp + 5));
	printf("iArray[6] = %d \t At Address : %p\n", *(iArray_olp + 6), (iArray_olp + 6));
	printf("iArray[7] = %d \t At Address : %p\n", *(iArray_olp + 7), (iArray_olp + 7));
	printf("iArray[8] = %d \t At Address : %p\n", *(iArray_olp + 8), (iArray_olp + 8));
	printf("iArray[9] = %d \t At Address : %p\n", *(iArray_olp + 9), (iArray_olp + 9));

	printf("\n\n");
	printf("Floating Array Elements And THe Addresses They Occupay Are as Follows :\n\n");
	printf("fArray[0] = %f \t At Address : %p\n", *(fArray_olp + 0), (fArray_olp + 0));
	printf("fArray[1] = %f \t At Address : %p\n", *(fArray_olp + 1), (fArray_olp + 1));
	printf("fArray[2] = %f \t At Address : %p\n", *(fArray_olp + 2), (fArray_olp + 2));
	printf("fArray[3] = %f \t At Address : %p\n", *(fArray_olp + 3), (fArray_olp + 3));
	printf("fArray[4] = %f \t At Address : %p\n", *(fArray_olp + 4), (fArray_olp + 4));

	printf("\n\n");
	printf("Double Array Elements And THe Addresses They Occupay Are as Follows :\n\n");
	printf("dArray[0] = %lf \t At Address : %p\n", *(dArray_olp + 0), (dArray_olp + 0));
	printf("dArray[1] = %lf \t At Address : %p\n", *(dArray_olp + 1), (dArray_olp + 1));
	printf("dArray[2] = %lf \t At Address : %p\n", *(dArray_olp + 2), (dArray_olp + 2));
	
	printf("\n\n");
	printf("Character Array Elements And THe Addresses They Occupay Are as Follows :\n\n");
	printf("cArray[0] = %c \t At Address : %p\n", *(cArray_olp + 0), (cArray_olp + 0));
	printf("cArray[1] = %c \t At Address : %p\n", *(cArray_olp + 1), (cArray_olp + 1));
	printf("cArray[2] = %c \t At Address : %p\n", *(cArray_olp + 2), (cArray_olp + 2));
	printf("cArray[3] = %c \t At Address : %p\n", *(cArray_olp + 3), (cArray_olp + 3));
	printf("cArray[4] = %c \t At Address : %p\n", *(cArray_olp + 4), (cArray_olp + 4));
	printf("cArray[5] = %c \t At Address : %p\n", *(cArray_olp + 5), (cArray_olp + 5));
	printf("cArray[6] = %c \t At Address : %p\n", *(cArray_olp + 6), (cArray_olp + 6));
	printf("cArray[7] = %c \t At Address : %p\n", *(cArray_olp + 7), (cArray_olp + 7));
	printf("cArray[8] = %c \t At Address : %p\n", *(cArray_olp + 8), (cArray_olp + 8));
	printf("cArray[9] = %c \t At Address : %p\n", *(cArray_olp + 9), (cArray_olp + 9));
	printf("cArray[10] = %c \t At Address : %p\n", *(cArray_olp + 10), (cArray_olp + 10));
	printf("cArray[11] = %c \t At Address : %p\n", *(cArray_olp + 11), (cArray_olp + 11));
	printf("cArray[12] = %c \t At Address : %p\n", *(cArray_olp + 12), (cArray_olp + 12));
	printf("cArray[13] = %c \t At Address : %p\n", *(cArray_olp + 13), (cArray_olp + 13));



	return (0);
}