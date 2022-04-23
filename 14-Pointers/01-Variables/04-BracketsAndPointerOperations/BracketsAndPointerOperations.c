#include<stdio.h>

int main(void) {

	//variable declarations
	int num_olp;
	int *ptr_olp;
	int ans_olp;

	//code
	num_olp = 5;
	ptr_olp = &num_olp;

	printf("\n\n");
	printf("num    =	%d\n", num_olp);
	printf("&num   =	%p\n", &num_olp);
	printf("*(&num)=    %d\n",*(&num_olp));
	printf(" ptr   =    %p\n", ptr_olp);
	printf(" *ptr  =    %d\n", *ptr_olp);

	printf("\n\n");

	printf("Answer Of (ptr+10) = %p\n", (ptr_olp + 10));
	printf("Answer Of *(ptr+10) = %d\n", *(ptr_olp + 10));
	printf("Answer Of (*ptr+10) = %d\n", (*ptr_olp + 10));
	++*ptr_olp;
	printf("Answer Of ++*ptr = %d\n",*ptr_olp);
	*ptr_olp++;
	printf("Answer Of *ptr++ = %d\n",*ptr_olp);
	*ptr_olp++;
	printf("Answer Of *ptr++ = %d\n", *ptr_olp);
	ptr_olp = &num_olp;
	(*ptr_olp)++;

	printf("Answer Of (*ptr++) = %d\n\n", *ptr_olp);
	return (0);
}