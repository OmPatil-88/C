#include<stdio.h>
int main(void) {

	//variable declarations
	float f_olp;
	float f_num_olp = 1.7f;

	//code
	printf("\n\n");

	printf("Printing Numbers %f to %f : \n\n", f_num_olp, (f_num_olp * 10.0f));
    f_olp = f_num_olp; 
	do{
		printf("\t%f\n", f_olp);
		f_olp = f_olp + f_num_olp;
	} while (f_olp <= (f_num_olp * 10.0f));
	printf("\n\n");
	return(0);
}