#include<stdio.h>

int main(void) {

	//variable declarations
	int i_olp = 5;
	float f_olp = 3.9f;
	double d_olp = 8.041997;
	char c_olp = 'A';

	//code

	printf("\n\n");

	printf("i_olp = %d\n", i_olp);
	printf("f_olp = %f\n", f_olp);
	printf("d_olp = %lf\n", d_olp);
	printf("c_olp = %c\n", c_olp);

	printf("\n\n");

	i_olp = 43;
	f_olp = 6.45f;
	d_olp = 26.1294;
	c_olp = 'P';

	printf("i_olp = %d\n", i_olp);
	printf("f_olp = %f\n", f_olp);
	printf("d_olp= %lf\n", d_olp);
	printf("c_olp= %c\n", c_olp);

	printf("\n\n");
	return (0);
}