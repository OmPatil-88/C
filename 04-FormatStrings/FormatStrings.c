#include<stdio.h>

int main(void) {

	//code
	printf("\n\n");
	printf("**************************************************************************************");
	printf("\n\n");

	printf("Hello world !!!\n\n");

	int a_olp = 13;
	printf("Integer Decimal of 'a_olp' = %d\n", a_olp);
	printf("Integer Octal value of 'a_olp' = %o\n", a_olp);
	printf("Integer Hexadecimal value of 'a_olp' (Hexadecimal Letters In Lower Case) = %x\n", a_olp);
	printf("Integer Hexadecimal value of 'a_olp' (Hexadecimal Letters In Higher Case) = %X\n", a_olp);

	char ch_olp = 'A';
	printf("Character 'ch_olp' =%c\n", ch_olp);
	char str_olp[] = "AstroMediComp's Real Time Rendering Batch";
	printf("string str =%s\n\n", str_olp);

	long num_olp = 30121995L;
	printf("Long Integer =%ld\n\n",num_olp);

	unsigned int b_olp = 7;
	printf("Unsigned Integer 'b_olp' =%u\n\n", b_olp);

	float f_num_olp = 3012.1995f;
	printf("Floating Point Number with Just %%f 'f_num_olp' =%f\n",f_num_olp);
	printf("Floating Point Number with %%4.2f 'f_num'= %4.2f\n",f_num_olp);
	printf("Floating Point Number with %%6.5f 'f_num' = %6.5f\n\n", f_num_olp);

	double d_pi_olp = 3.14159265358979323846;
	printf("Double Precision Floating Point Number without Exponential = %g\n", d_pi_olp);
	printf("Double Precision Floating Point Number with Exponential (Lower Case) = %e\n",d_pi_olp);
	printf("Double Precision Floating Point Number with Exponential (Upper Case) = %E\n", d_pi_olp);
	printf("Double Hexadecimal value of 'd_pi_olp' (Hexdecimal Letters In Lower Case) = %a\n", d_pi_olp);
	printf("Double Hexadecimal value of 'd_pi_olp' (Hexadecimal Letters In Upper Case) = %A\n\n", d_pi_olp);

	printf("**************************************************************************************");
	printf("\n\n");
		return (0);

}