#include<stdio.h>

int main(void) {

	//Defining Struct
	struct MyData_olp {
		int i_olp;
		float f_olp;
		double d_olp;
		char c_olp;
	}data_olp; //Declaring a single struct variable of type 'struct MyData_olp' locally ...

    //varibale declarations
	int i_size_olp;
	int f_size_olp;
	int d_size_olp;
	int struct_MyData_size_olp;

	//code
	//Assigning Data Values To The Data Members Of 'struct MyData_olp'
	data_olp.i_olp = 30;
	data_olp.f_olp = 11.45f;
	data_olp.d_olp = 1.2995;

	//Displayung Values Of The Data Members Of 'struct MyData_olp'
	printf("\n\n");
	printf("DATA MEMBERS OF 'Struct MyData' ARE : \n\n");
	printf("i = %d\n", data_olp.i_olp);
	printf("f = %f\n", data_olp.f_olp);
	printf("d = %lf\n", data_olp.d_olp);

	//Calculating Sizes (In Bytes) Of The Data m=Members Of 'Struct MyData_olp'
	i_size_olp = sizeof(data_olp.i_olp);
	f_size_olp = sizeof(data_olp.f_olp);
	d_size_olp = sizeof(data_olp.d_olp);

	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE :\n\n");
	printf("Size of 'i' = %d\n", i_size_olp);
	printf("Size of 'f' = %d\n", f_size_olp);
	printf("Size of 'd' = %d\n", d_size_olp);
	struct_MyData_size_olp = sizeof(struct MyData_olp);
	//Displaying Sizes (In Bytes) Of the entire 'struct MyData_olp'
	printf("\n\n");
	printf("Size of 'struct MyData_olp' : %d bytes\n\n", struct_MyData_size_olp);
	return(0);

}