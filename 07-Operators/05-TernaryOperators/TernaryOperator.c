#include<stdio.h>

int main(void) {

	//variable declarations
	int a_olp, b_olp;
	int p_olp, q_olp;
	char ch_result_01_olp, ch_result_02_olp;
	int i_result_01_olp, i_result_02_olp;

	//code

	printf("\n\n");

	a_olp = 7;
	b_olp = 5;
	ch_result_01_olp = (a_olp > b_olp) ? 'A' : 'B';
	i_result_02_olp = (a_olp > b_olp) ? a_olp : b_olp;
	printf("Ternery Operator Answer 1 ----- %c and %d.\n\n", ch_result_01_olp, i_result_02_olp);
	p_olp = 30;
	q_olp = 30;

	ch_result_02_olp = (p_olp != q_olp) ? 'P' : 'Q';
	i_result_02_olp = (p_olp != q_olp) ? 'P' : 'Q';
	printf("Ternary Operator Answer 2 ----- %c and %d. \n\n", ch_result_02_olp, i_result_02_olp);

	printf("\n\n");
	return (0);

}