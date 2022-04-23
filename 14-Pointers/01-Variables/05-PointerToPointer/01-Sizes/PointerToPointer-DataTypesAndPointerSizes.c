#include<stdio.h>

struct employee {

	char name[100];
	int age;
	float salary;
	char sex;
	char marital_status;
};

int main(void) {

	//code
	printf("\n\n");
	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size of (int)              :%d\tSize Of pointer to int (int*)                         :%d \t Size of pointer to pointer to int(int**)                         :%d\n\n",sizeof(int),sizeof(int*),sizeof(int**));
	printf("Size of (float)            :%d\tSize Of pointer to float (float*)                     :%d \t Size of pointer to pointer to float(float**)                     :%d\n\n", sizeof(float), sizeof(float*), sizeof(float**));
	printf("Size of (double)           :%d\tSize Of pointer to double (double*)                   :%d \t Size of pointer to pointer to double(double**)                   :%d\n\n", sizeof(double), sizeof(double*), sizeof(double**));
	printf("Size of (char)             :%d\tSize Of pointer to char (char*)                       :%d \t Size of pointer to pointer to char(char**)                       :%d\n\n", sizeof(char), sizeof(char*), sizeof(char**));
	printf("Size of (struct employee)  :%d\tSize Of pointer to struct employee (struct employee*) :%d \t Size of pointer to pointer to struct employee(struct employee**) :%d\n\n", sizeof(struct employee), sizeof(struct employee*), sizeof(struct employee**));


	return (0);
}