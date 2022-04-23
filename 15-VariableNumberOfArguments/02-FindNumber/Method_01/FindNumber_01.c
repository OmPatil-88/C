#include<stdio.h>
#include<stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void) {

	//function prototype
	void FindNumber(int, int, ...);

	//code
	printf("\n\n");
	FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);
    
	return(0);
}

void FindNumber(int num_to_be_found, int num, ...) {

	//variable declarations
	int count_olp = 0;
	int n_olp = 0;
	va_list numbers_list;

	//code
	va_start(numbers_list, num);
	while (num)
	{
		n_olp = va_arg(numbers_list, int);
		if (n_olp == num_to_be_found)
			count_olp++;
		num--;
	}
	if (count_olp == 0)
		printf("Number %d is Could Not Be Found !!!\n\n", num_to_be_found);
	else
		printf("Number %d is Found %d Times !!!\n\n\n", num_to_be_found, count_olp);

	va_list(number_list);
}