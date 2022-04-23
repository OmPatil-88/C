#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[] = { 10,20,30,40,50,60,70,80,90,100 };
	int* ptr_iArray_olp = NULL;
	//code
	printf("\n\n");
	printf("*** Using Array Name As Pointer i.e Value OF xth Element Of iArray : *(iArray + x) And Address Of Xth Element Of iArray : (iArray+x) ***\n\n");
	printf("Integer Array Elements And Their Addresses :\n\n");
	printf("*(iArray+0) = %d \t \t At Address (iArray_olp + 0) : %p\n,", *(iArray_olp + 0), (iArray_olp + 0));
	printf("*(iArray+1) = %d \t \t At Address (iArray_olp + 1) : %p\n,", *(iArray_olp + 1), (iArray_olp + 1));
	printf("*(iArray+2) = %d \t \t At Address (iArray_olp + 2) : %p\n,", *(iArray_olp + 2), (iArray_olp + 2));
	printf("*(iArray+3) = %d \t \t At Address (iArray_olp + 3) : %p\n,", *(iArray_olp + 3), (iArray_olp + 3));
	printf("*(iArray+4) = %d \t \t At Address (iArray_olp + 4) : %p\n,", *(iArray_olp + 4), (iArray_olp + 4));
	printf("*(iArray+5) = %d \t \t At Address (iArray_olp + 5) : %p\n,", *(iArray_olp + 5), (iArray_olp + 5));
	printf("*(iArray+6) = %d \t \t At Address (iArray_olp + 6) : %p\n,", *(iArray_olp + 6), (iArray_olp + 6));
	printf("*(iArray+7) = %d \t \t At Address (iArray_olp + 7) : %p\n,", *(iArray_olp + 7), (iArray_olp + 7));
	printf("*(iArray+8) = %d \t \t At Address (iArray_olp + 8) : %p\n,", *(iArray_olp + 8), (iArray_olp + 8));
	printf("*(iArray+9) = %d \t \t At Address (iArray_olp + 9) : %p\n,", *(iArray_olp + 9), (iArray_olp + 9));

	ptr_iArray_olp = iArray_olp;
	printf("*** Using Pointer As Array Name i.e Value Of xth Element Of iArray : ptr_iArray[x] And Address Of Xth Element Of iArray : &ptr_iArray[x] ***\n\n\n");
	printf("Integer Array Elements And Their Addresses :\n\n");
	printf("ptr_iArray_olp[0] = %d \t \t At Address &ptr_iArray_olp[0] : %p\n", ptr_iArray_olp[0], &ptr_iArray_olp[0]);
	printf("ptr_iArray_olp[1] = %d \t \t At Address &ptr_iArray_olp[1] : %p\n", ptr_iArray_olp[1], &ptr_iArray_olp[1]);
	printf("ptr_iArray_olp[2] = %d \t \t At Address &ptr_iArray_olp[2] : %p\n", ptr_iArray_olp[2], &ptr_iArray_olp[2]);
	printf("ptr_iArray_olp[3] = %d \t \t At Address &ptr_iArray_olp[3] : %p\n", ptr_iArray_olp[3], &ptr_iArray_olp[3]);
	printf("ptr_iArray_olp[4] = %d \t \t At Address &ptr_iArray_olp[4] : %p\n", ptr_iArray_olp[4], &ptr_iArray_olp[4]);
	printf("ptr_iArray_olp[5] = %d \t \t At Address &ptr_iArray_olp[5] : %p\n", ptr_iArray_olp[5], &ptr_iArray_olp[5]);
	printf("ptr_iArray_olp[6] = %d \t \t At Address &ptr_iArray_olp[6] : %p\n", ptr_iArray_olp[6], &ptr_iArray_olp[6]);
	printf("ptr_iArray_olp[7] = %d \t \t At Address &ptr_iArray_olp[7] : %p\n", ptr_iArray_olp[7], &ptr_iArray_olp[7]);
	printf("ptr_iArray_olp[8] = %d \t \t At Address &ptr_iArray_olp[8] : %p\n", ptr_iArray_olp[8], &ptr_iArray_olp[8]);
	printf("ptr_iArray_olp[9] = %d \t \t At Address &ptr_iArray_olp[9] : %p\n", ptr_iArray_olp[9], &ptr_iArray_olp[9]);

	return (0);
}