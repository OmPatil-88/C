#include<stdio.h>
int main(void) {

	//variable declarations

	int i_olp, j_olp;

	//code
	printf("\n\n");
	i_olp = 1; 
	do{
		printf("i = %d\n",i_olp);
		printf("--------\n\n");
		j_olp = 1; 
		do{
			printf("\tj = %d\n", j_olp);
			j_olp++;
		} while (j_olp <= 5);
		i_olp++;
		printf("\n\n");
	} while (i_olp <= 10);
	return (0);
}