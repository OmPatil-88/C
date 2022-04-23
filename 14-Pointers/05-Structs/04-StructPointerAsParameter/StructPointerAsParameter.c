#include<stdio.h>

struct MyData {

	int i;
	float f;
	double d;
};

int main(void) {

	//function prtotypes
	void ChangeValues(struct MyData*);

	//variable declarations
	struct MyData* pData_olp = NULL;

	//code
	printf("\n\n");

	pData_olp = (struct MyData*)malloc(sizeof(struct MyData));
	if (pData_olp == NULL) {
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITING NOW ...\n\n");
		exit(0);
	}
	else {
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");
	}

	pData_olp->i = 30;
	pData_olp->f = 11.45f;
	pData_olp->d = 1.2995;

	printf("\n\n");
	printf("DATA  MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", pData_olp->i);
	printf("f = %f\n", pData_olp->f);
	printf("d = %lf\n", pData_olp->d);

	ChangeValues(pData_olp);

	printf("\n\n");
	printf("DATA  MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", pData_olp->i);
	printf("f = %f\n", pData_olp->f);
	printf("d = %lf\n", pData_olp->d);

	if (pData_olp) {
		free(pData_olp);
		pData_olp = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULL FREED !!!\n\n");
	}
	return (0);
}

void ChangeValues(struct MyData* pParam_Data) {

	pParam_Data->i = 9;
	pParam_Data->f = 8.2f;
	pParam_Data->d = 6.1998;
}