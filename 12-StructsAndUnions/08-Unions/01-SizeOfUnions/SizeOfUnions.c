#include<stdio.h>

struct MyStruct_olp
{
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

union  MyUnion_olp
{
	int i;
	float f;
	double d;
	char c;
};

int main(void) {

	//variable declarations
	struct MyStruct_olp s_olp;
	union MyUnion_olp u_olp;

	// code
	printf("\n\n");
	printf("Size Of MyStruct = %lu\n", sizeof(s_olp));
	printf("\n\n");
	printf("Size Of MyUnion = %lu\n", sizeof(u_olp));
	return(0);
}