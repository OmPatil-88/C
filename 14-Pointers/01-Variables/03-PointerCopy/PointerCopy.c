#include<stdio.h>

int main(void) {

	//variable declarations
	int num_olp;
	int* ptr_olp = NULL;
	int* copy_ptr_olp = NULL;

	// code

	num_olp = 5;
	ptr_olp = &num_olp;

	printf("\n\n");
	printf(" ****** BEFORE copy_ptr =ptr ******\n\n");
	printf(" num             =%d\n", num_olp);
	printf(" &num            =%p\n", &num_olp);
	printf(" *(&num)         =%d\n", *(&num_olp));
	printf("  ptr            =%p\n", ptr_olp);
	printf("  *ptr           =%d\n", *ptr_olp);

	copy_ptr_olp = ptr_olp;

	printf("\n\n");
	printf(" ****** After copy_ptr =ptr ******\n\n");
	printf(" num             =%d\n", num_olp);
	printf(" &num            =%p\n", &num_olp);
	printf(" *(&num)         =%d\n", *(&num_olp));
	printf("  ptr            =%p\n", ptr_olp);
	printf("  *ptr           =%d\n", *ptr_olp);
	printf("  copy_ptr       =%p\n", copy_ptr_olp);
	printf("  *copy_ptr      =%d\n", *copy_ptr_olp);

	return (0);
}