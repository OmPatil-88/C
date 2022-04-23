#include<stdio.h>

//DEFINING STRUCT
struct MyData_olp {
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	struct MyData_olp data_one_olp = { 35,3.9f,1.23765,'A' };
	struct MyData_olp data_two_olp = {'P',6.2f,12.199523,68};
	struct MyData_olp data_three_olp = { 36,'G' };
	struct MyData_olp data_four_olp = { 36};


	//code
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_one' ARE : \n\n");
	printf("i = %d\n", data_one_olp.i_olp);
	printf("f = %f\n", data_one_olp.f_olp);
	printf("d = %lf\n", data_one_olp.d_olp);
	printf("c = %c\n", data_one_olp.c_olp);
  

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_two' ARE : \n\n");
	printf("i = %d\n", data_two_olp.i_olp);
	printf("f = %f\n", data_two_olp.f_olp);
	printf("d = %lf\n", data_two_olp.d_olp);
	printf("c = %c\n", data_two_olp.c_olp);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_three' ARE : \n\n");
	printf("i = %d\n", data_three_olp.i_olp);
	printf("f = %f\n", data_three_olp.f_olp);
	printf("d = %lf\n", data_three_olp.d_olp);
	printf("c = %c\n", data_three_olp.c_olp);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_four' ARE : \n\n");
	printf("i = %d\n", data_four_olp.i_olp);
	printf("f = %f\n", data_four_olp.f_olp);
	printf("d = %lf\n", data_four_olp.d_olp);
	printf("c = %c\n", data_four_olp.c_olp);
    
	return (0);
}