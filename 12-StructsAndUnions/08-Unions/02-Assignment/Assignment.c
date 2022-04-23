#include<stdio.h>

union MyUnion_olp {
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	// variable declarations
	union MyUnion_olp u1_olp, u2_olp;

	// code

	printf("\n\n");
	printf("Members Of union u1 Are : \n\n");

	u1_olp.i_olp = 6;
	u1_olp.f_olp = 1.2f;
	u1_olp.d_olp = 8.333333;
	u1_olp.c_olp = 'S';

	printf("u1.i = %d \n\n", u1_olp.i_olp);
	printf("u1.f = %f \n\n", u1_olp.f_olp);
	printf("u1.d = %lf \n\n", u1_olp.d_olp);
	printf("u1.c = %c \n\n", u1_olp.c_olp);

	printf("Adresses Of Members Of Union u1 Are :\n\n");
	printf("u1.i = %p \n\n", &u1_olp.i_olp);
	printf("u1.f = %p \n\n", &u1_olp.f_olp);
	printf("u1.d = %p \n\n", &u1_olp.d_olp);
	printf("u1.c = %p \n\n", &u1_olp.c_olp);

	printf("Myunion u1 =%p \n\n", &u1_olp);
	

	printf("\n\n");
	printf("Members Of union u2 Are : \n\n");

	u2_olp.i_olp = 3;
	printf("u2.i = %d \n\n", u2_olp.i_olp);
	u2_olp.f_olp = 4.5f;
	printf("u2.f = %f \n\n", u2_olp.f_olp);
	u2_olp.d_olp = 5.12764;
	printf("u2.d = %lf \n\n", u2_olp.d_olp);
	u2_olp.c_olp = 'A';
	printf("u2.c = %c \n\n", u2_olp.c_olp);

	printf("Adresses Of Members Of Union u2 Are :\n\n");
	printf("u2.i = %p \n\n", &u2_olp.i_olp);
	printf("u2.f = %p \n\n", &u2_olp.f_olp);
	printf("u2.d = %p \n\n", &u2_olp.d_olp);
	printf("u2.c = %p \n\n", &u2_olp.c_olp);

	printf("Myunion u2 =%p \n\n", &u2_olp);
	
	return(0);
}