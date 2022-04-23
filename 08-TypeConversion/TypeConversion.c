#include<stdio.h>

int main(void) {

	//variable declarations
	int i_olp, j_olp;
	char ch_01_olp, ch_02_olp;

	int a_olp, result_int_olp;
	float f_olp, result_float_olp;
	
	int i_explicit_olp;
	float f_explicit_olp;

	//code 
	printf("\n\n");

	//INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
	i_olp = 70;
	ch_01_olp = i_olp;
	printf("I = %d\n", i_olp);
	printf("Charcater 1 (after ch_01_olp = i) = %c\n\n", ch_01_olp);

	ch_02_olp = 'Q';
	j_olp = ch_02_olp;
	printf("Character 2 = %c\n",ch_02_olp);
	printf("J (after j = ch_02_olp) = %d \n\n", j_olp);

	//IMPLICIT CONVERSION OF 'int' TO 'float'...
	a_olp = 5;
	f_olp = 7.8f;
	result_float_olp = a_olp + f_olp;
	printf("Integer  a_olp =%d And Floating-Point Number %f Added Gives Floating-Point Sum =%f\n\n", a_olp, f_olp, result_float_olp);

	result_int_olp = a_olp + f_olp;
	printf("Integer  a_olp =%d And Floating-Point Number %f Added Gives Integer Sum =%d\n\n", a_olp, f_olp, result_int_olp);

	//EXPLICIT TYPE-CASTING USING CAST OPERATOR...
	f_explicit_olp = 30.1211995f;
	i_explicit_olp = (int)f_explicit_olp;

	printf("Floating Point Which Will Be Type Casted Explicitly =%f\n", f_explicit_olp);
	printf("Resultant Integer After Explicit Type Casting of %f = %d\n\n", f_explicit_olp,i_explicit_olp);

	return (0);
}