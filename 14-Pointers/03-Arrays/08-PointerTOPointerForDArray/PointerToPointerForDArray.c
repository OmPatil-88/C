#include<stdio.h>
#include<stdlib.h>

int main(void) {

	void MyAlloc(int** ptr, unsigned int numberOfElements);

	//variable declarations

	int* piArray_olp = NULL;
	unsigned int num_elements_olp;
	int i_olp;

	// code
	printf("\n\n");
	printf("How Many Elements You Want In Integer Arrray ?\n\n");
	scanf("%u", &num_elements_olp);

	printf("\n\n");
	MyAlloc(&piArray_olp, num_elements_olp);

	printf("Enter %u Elements To Fill Up Your Integer Array :\n\n",num_elements_olp);
	for (i_olp = 0; i_olp < num_elements_olp; i_olp++) {
		scanf("%d", &piArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("Thee  %u Elements Entered By You In Integer Array :\n\n", num_elements_olp);
	for (i_olp = 0; i_olp < num_elements_olp; i_olp++) {
		printf("%u\n", piArray_olp[i_olp]);
	}
	printf("\n\n");
	if (piArray_olp) {
		free(piArray_olp);
		piArray_olp = NULL;
		printf("Memory Allocated Has Now Been Successfully Freed !!!\n\n");
	}
	return (0);
}

void MyAlloc(int** ptr, unsigned int numberOfElements) {

	//code
	*ptr = (int*)malloc(numberOfElements * sizeof(int));
	if (*ptr == NULL) {
		printf("Could Not Allocate Memeory !!! Exiting Now..\n\n");
		exit(0);
	 }
	printf("MyAlloc() Has Successfully Allocated %lu Bytes For Integer Array !!!\n\n", (numberOfElements * sizeof(int)));
}