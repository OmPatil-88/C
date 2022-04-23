#include<stdio.h>

//DEFINING STRUCT
struct MyData_olp {
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
}; 

struct MyData_olp data_olp = { 30,4.5f,11.451995,'A' };

int main(void) {

	//code
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data_olp.i_olp);
	printf("f = %f\n", data_olp.f_olp);
	printf("d = %lf\n", data_olp.d_olp);
	printf("c = %c\n", data_olp.c_olp);
	return (0);
}