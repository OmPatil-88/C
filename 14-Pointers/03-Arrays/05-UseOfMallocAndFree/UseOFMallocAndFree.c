#include<stdio.h>
#include<stdlib.h>

int main(void) {

	//variable declarations
	int* ptr_iArray_olp = NULL;
	unsigned int intArrayLength_olp = 0;
	int i_olp;

	//code
	printf("\n\n");
	printf("Enter The Number Of Elements you Want In Your Integer Array :");
	scanf("%d", &intArrayLength_olp);

	ptr_iArray_olp = (int*)malloc(sizeof(int) * intArrayLength_olp);

	if (ptr_iArray_olp == NULL) {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS SUCCEEDES !!!\n\n");
		printf("MEMORY ADDRESSES FROM %p TO %p HAVE BEEN ALLOCATED TO INTEGER ARRAY !!!\n\n", ptr_iArray_olp,(ptr_iArray_olp+(intArrayLength_olp-1)));
	}
	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", intArrayLength_olp);
	for (i_olp = 0; i_olp < intArrayLength_olp; i_olp++)
		scanf("%d", (ptr_iArray_olp + i_olp));

	printf("\n\n");
	printf("The Integer Array Entered By You,Consisting Of %d Elements :\n\n",intArrayLength_olp);
	for (i_olp = 0; i_olp < intArrayLength_olp; i_olp++) {
		printf("ptr_iArray[%d] = %d\t\t At Address &ptr_iArray[%d] : %p\n",i_olp,ptr_iArray_olp[i_olp],i_olp,&ptr_iArray_olp[i_olp]);
	}
	printf("\n\n");
	for (i_olp = 0; i_olp < intArrayLength_olp; i_olp++) {
		printf("*(ptr_iArray+%d)=%d \t\t At Address (ptr_iArray + %d): %p\n",i_olp,*(ptr_iArray_olp+i_olp),i_olp,(ptr_iArray_olp+i_olp));
	}
	if (ptr_iArray_olp) {
		free(ptr_iArray_olp);
		ptr_iArray_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCARED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	 }

	return (0);
	return (0);
}