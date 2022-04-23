#include<stdio.h>

struct MyData_olp {

	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	// variable declarations
	struct MyData_olp data_olp;

	// code
	// Assiging Data Values To The Data Members Of 'Struct MyData'
    
	data_olp.i_olp = 30;
	data_olp.f_olp = 11.45f;
	data_olp.d_olp = 1.2995;
	data_olp.c_olp = 'A';
	
	printf("\n\n");
	printf("Data Members Of 'Struct MyData' Are : \n\n");
	printf("i = %d\n", data_olp.i_olp);
	printf("f = %f\n", data_olp.f_olp);
	printf("d = %lf\n", data_olp.d_olp);
	printf("c = %c\n", data_olp.c_olp);

	printf("\n\n");
	printf("Addresses Of Data Members Of 'Struct MyData' Are : \n\n");
	printf("'i' Occupies Addresses From %p\n", &data_olp.i_olp);
	printf("'f' Occupies Addresses From %p\n", &data_olp.f_olp);
	printf("'d' Occupies Addresses From %p\n", &data_olp.d_olp);
	printf("'c' Occupies Addresses From %p\n", &data_olp.c_olp);
	
	printf("Starting Address Of Struct MyData variable 'data' = %p\n\n", &data_olp);
	return (0);
}