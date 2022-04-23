#include<stdio.h>
#include<conio.h>

//DEFINING STRUCT
struct MyData_olp {
	int i_olp;
	float f_olp;
	double d_olp;
	char ch_olp;
};

int main(void) {

	//variable declarations
	struct MyData_olp data_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Values For Data Member 'i' Of 'Struct MyData' : \n");
	scanf("%d", &data_olp.i_olp);


	printf("Enter Floating-Point Values For Data Member 'f' Of 'Struct MyData' : \n");
	scanf("%f", &data_olp.f_olp);

	printf("Enter 'Double' Values For Data Member 'd' Of 'Struct MyData' : \n");
	scanf("%lf", &data_olp.d_olp);
	

	printf("Enter Character Values For Data Member 'c' Of 'Struct MyData' : \n");
	data_olp.ch_olp = getch();
	
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data_olp.i_olp);
	printf("f = %f\n", data_olp.f_olp);
	printf("d = %lf\n", data_olp.d_olp);
	printf("c = %c\n", data_olp.ch_olp);
	return (0);
}