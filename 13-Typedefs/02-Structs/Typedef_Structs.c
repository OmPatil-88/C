#include<stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee {

	char name_olp[MAX_NAME_LENGTH];
	unsigned int age_olp;
	char gender_olp;
	double salary_olp;
};
struct MyData {
	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	//typedefs
	typedef struct Employee My_EMPOYEE_TYPE_OLP;
	typedef struct MyData MY_DATA_TYPE_OLP;

	//variable declarations
	struct  Employee emp_olp = { "Funny",25,'M',10000.00 };
	My_EMPOYEE_TYPE_OLP emp_typedef_olp = { "Bunny",23,'F',20400.00 };

	struct MyData md_olp = { 30,11.45f,26.122017,'X' };
	MY_DATA_TYPE_OLP md_typedef_olp;

	//code
	md_typedef_olp.i_olp = 9;
	md_typedef_olp.f_olp = 1.5f;
	md_typedef_olp.d_olp = 8.041997;
	md_typedef_olp.c_olp = 'P';

	printf("\n\n");
	printf("struct Employee : \n\n");
	printf("emp.name   =%s\n", emp_olp.name_olp);
	printf("emp.age    =%d\n", emp_olp.age_olp);
	printf("emp.gender =%c\n", emp_olp.gender_olp);
	printf("emp.salary =%lf\n", emp_olp.salary_olp);

	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE : \n\n");
	printf("emp_typedef.name   =%s\n", emp_typedef_olp.name_olp);
	printf("emp_typedef.age    =%d\n", emp_typedef_olp.age_olp);
	printf("emp_typedef.gender =%c\n", emp_typedef_olp.gender_olp);
	printf("emp_typedef.salary =%lf\n", emp_typedef_olp.salary_olp);

	printf("\n\n");
	printf("struct MyData : \n\n");
	printf("md.i %d\n", md_olp.i_olp);
	printf("md.f %f\n", md_olp.f_olp);
	printf("md.d =%lf\n", md_olp.d_olp);
	printf("md.c = %c\n", md_olp.c_olp);

	printf("\n\n");
	printf("MY_DATA_TYPE : \n\n");
	printf("md_typedef.i = %d\n", md_typedef_olp.i_olp);
	printf("md_typedef.f = %f\n", md_typedef_olp.f_olp);
	printf("md_typedef.d = lf\n", md_typedef_olp.d_olp);
	printf("md_typedef.c = %c\n", md_typedef_olp.c_olp);

	printf("\n\n");
	return(0);
}