#include<stdio.h>

struct Employee_olp
{
	char name_olp[100];
	int age_olp;
	float salary_olp;
	char sex_olp;
	char marital_status_olp;
};

int main(void) {

	// code
	printf("\n\n");
	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE :\n\n");
	printf("Size of (int)			   : %d \t \t \t sizeof Pointer to int (int*)                         : %d\n\n", sizeof(int), sizeof(int*));
	printf("Size of (float)            : %d \t \t \t sizeof Pointer to float (float*)                     : %d\n\n", sizeof(float), sizeof(float*));
	printf("Size of (double)           : %d \t \t \t sizeof Pointer to double (double*)                   : %d\n\n", sizeof(double), sizeof(double*));
	printf("Size of (char)             : %d \t \t \t sizeof Pointer to char (char*)                       : %d\n\n", sizeof(char), sizeof(char*));
	printf("Size of (struct  Employee) : %d \t \t \t sizeof Pointer to struct Employee (struct employee*) : %d\n\n", sizeof(struct Employee_olp), sizeof(struct Employee_olp*));
	return 0;
}