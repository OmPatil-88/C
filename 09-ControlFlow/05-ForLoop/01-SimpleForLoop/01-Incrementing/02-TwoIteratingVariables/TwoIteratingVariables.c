#include<stdio.h>
int main(void) {
	//variable declarations
	int i_olp,j_olp;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 10 and 10 to 100: \n\n");
	for (i_olp = 1,j_olp=10; i_olp <= 10, j_olp <=100; i_olp++,j_olp=j_olp+10) {
		printf("\t%d \t %d \n",i_olp,j_olp);
	}
	printf("\n\n");

	return (0);
}
