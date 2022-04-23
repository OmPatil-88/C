#include<stdio.h>
#include<stdarg.h>

int main(void) {

	//function prtotypes

	int CalculateSum(int, ...);

	//variable declarations
	int answer_olp;

	printf("\n\n");
	
	answer_olp = CalculateSum(5, 10, 20, 30, 40, 50);
	printf("Answer = %d \n\n", answer_olp);

	answer_olp = CalculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	printf("Answer = %d \n\n", answer_olp);

	answer_olp = CalculateSum(0);
	printf("Answer = %d\n\n", answer_olp);

	return(0);
}

int CalculateSum(int num, ...) {

	//functio prtotype
	int va_CalculateSum(int, va_list);

	//variable declarations
	int sum_olp = 0;
	int n_olp;

	va_list number_list_olp;

	va_start(number_list_olp, num);
	sum_olp = va_CalculateSum(num, number_list_olp);
	va_end(number_list_olp);
	return(sum_olp);

}

int va_CalculateSum(int num, va_list list) {

	//variable declaration
	int n_olp;
	int sum_total_olp = 0;

	while (num)
	{
		n_olp = va_arg(list, int);
		sum_total_olp = sum_total_olp + n_olp;
		num--;
	}
	return sum_total_olp;
}
