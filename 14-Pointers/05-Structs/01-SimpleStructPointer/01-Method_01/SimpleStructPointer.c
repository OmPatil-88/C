#include<stdio.h>

struct MyData {

	int i;
	float f;
	double d;
};

int main(void) {

	//variable declarations
	int i_size_olp;
	int f_size_olp;
	int d_size_olp;
	int struct_Mydata_size_olp;
	int pointer_to_struct_MyData_size_olp;

	struct MyData* pData_olp = NULL;

	//code
	printf("\n\n");
	pData_olp = (struct MyData*)malloc(sizeof(struct MyData));
	if (pData_olp == NULL) {
		printf("Failed TO Allocate Memeory To 'struct MyData' !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else {
		printf("SCCESSFULLY ALLOCARED MEMORY TO 'struct MyData' !!!\n\n");
	}

	(*pData_olp).i = 30;
	(*pData_olp).f = 11.45f;
	(*pData_olp).d = 1.2995;

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", (*pData_olp).i);
	printf("f = %f\n", (*pData_olp).f);
	printf("d = %lf\n", (*pData_olp).d);
    
	i_size_olp = sizeof((*pData_olp).i);
	f_size_olp = sizeof((*pData_olp).f);
	d_size_olp = sizeof((*pData_olp).d);

	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'i' = %d bytes\n", i_size_olp);
	printf("Size Of 'f' = %d bytes\n", f_size_olp);
	printf("Size Of 'd' = %d bytes\n", d_size_olp);

	struct_Mydata_size_olp = sizeof(struct MyData);
	pointer_to_struct_MyData_size_olp = sizeof(struct MyData*);
    
	printf("\n\n");
	printf("Size of 'struct MyData' :%d bytes \n\n", struct_Mydata_size_olp);
	printf("Size of pointer to 'struct MyData' : %d bytes\n\n", pointer_to_struct_MyData_size_olp);

	if (pData_olp) {
		free(pData_olp);
		pData_olp = NULL;
		printf("MEMEORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}