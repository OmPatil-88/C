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

	struct MyData data_olp;

	//code
	data_olp.i = 9;
	data_olp.ptr_i = &data_olp.i;
	
	data_olp.f = 11.45f;
	data_olp.ptr_f = &data_olp.f;

	data_olp.d = 30.121995;
	data_olp.ptr_d = &data_olp.d;
    
	printf("\n\n");
	printf("i = %d\n", *(data_olp.ptr_i));
	printf("Address Of 'i' = %p\n", data_olp.ptr_i);
    
	printf("\n\n");
	printf("f = %f\n", *(data_olp.ptr_f));
	printf("Address Of 'f' = %p\n", data_olp.ptr_f);

	printf("\n\n");
	printf("d = %lf\n", *(data_olp.ptr_d));
	printf("Address Of 'd' = %p\n", data_olp.ptr_d);

	return 0;
}