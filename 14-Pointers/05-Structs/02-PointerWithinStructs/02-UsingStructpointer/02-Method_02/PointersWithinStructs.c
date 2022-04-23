#include<stdio.h>

struct MyData {

	int* ptr_i;
	int i;

	float* ptr_f;
	float f;

	double* ptr_d;
	double d;
};

int main(void) {

	//variable declarations
	struct MyData *pdata_olp=NULL;

	//code
	printf("\n\n");
	pdata_olp = (struct MyData*)malloc(sizeof(struct MyData));
	if (pdata_olp == NULL) {
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITTING NOW ...\n\n");
		exit(0);
	}
	else {
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");
	}
	pdata_olp->i = 9;
	pdata_olp->ptr_i = &(pdata_olp->i);
	
	pdata_olp->f = 11.45f;
	pdata_olp->ptr_f = &(pdata_olp->f);

	pdata_olp->d = 30.121995;
	pdata_olp->ptr_d = &(pdata_olp->d);
    
	printf("\n\n");
	printf("i = %d\n", *(pdata_olp->ptr_i));
	printf("Address Of 'i' = %p\n", pdata_olp->ptr_i);
    
	printf("\n\n");
	printf("f = %f\n", *(pdata_olp->ptr_f));
	printf("Address Of 'f' = %p\n", pdata_olp->ptr_f);

	printf("\n\n");
	printf("d = %lf\n", *(pdata_olp->ptr_d));
	printf("Address Of 'd' = %p\n", pdata_olp->ptr_d);

	if (pdata_olp) {
		free(pdata_olp);
		pdata_olp = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return (0);
}