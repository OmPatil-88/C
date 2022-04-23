#include<stdio.h>

struct MyStruct_olp{
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

union MyUnion_olp {
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	// variable declarations
	struct MyStruct_olp s_olp;
	union MyUnion_olp u_olp;

	// code

	printf("\n\n");
	printf("Members Of Struct Are : \n\n");

	s_olp.i_olp = 9;
	s_olp.f_olp = 8.7f;
	s_olp.d_olp = 1.233422;
	s_olp.c_olp = 'P';

	printf("s.i = %d \n\n", s_olp.i_olp);
	printf("s.f = %f \n\n", s_olp.f_olp);
	printf("s.d = %lf \n\n",s_olp.d_olp);
	printf("s.c = %c \n\n", s_olp.c_olp);

	printf("Adresses Of Members Of Struct Are :\n\n");
	printf("s.i = %p \n\n", &s_olp.i_olp);
	printf("s.f = %p \n\n", &s_olp.f_olp);
	printf("s.d = %p \n\n", &s_olp.d_olp);
	printf("s.c = %p \n\n", &s_olp.c_olp);

	printf("MyStruct =%p \n\n", &s_olp);


	printf("\n\n");
	printf("Members Of unio u Are : \n\n");

	u_olp.i_olp = 3;
	printf("u.i = %d \n\n", u_olp.i_olp);
	u_olp.f_olp = 4.5f;
	printf("u.f = %f \n\n", u_olp.f_olp);
	u_olp.d_olp = 5.12764;
	printf("u.d = %lf \n\n", u_olp.d_olp);
	u_olp.c_olp = 'A';
	printf("u.c = %c \n\n", u_olp.c_olp);

	printf("Adresses Of Members Of Union Are :\n\n");
	printf("u.i = %p \n\n", &u_olp.i_olp);
	printf("u.f = %p \n\n", &u_olp.f_olp);
	printf("u.d = %p \n\n", &u_olp.d_olp);
	printf("u.c = %p \n\n", &u_olp.c_olp);

	printf("Myunion =%p \n\n", &u_olp);

	return(0);
}