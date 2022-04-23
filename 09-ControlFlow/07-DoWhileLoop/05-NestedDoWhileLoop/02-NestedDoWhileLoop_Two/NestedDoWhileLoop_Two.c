#include<stdio.h>
int main(void) {

	//variable declarations

	int i_olp, j_olp,k_olp;

	//code
	printf("\n\n");
	i_olp = 1; 
	do{
		printf("i = %d\n", i_olp);
		printf("--------\n\n");
		j_olp = 1; 
		do{
			printf("\tj = %d\n", j_olp);
			printf("\t--------\n\n");
			k_olp = 1; 
			do{
				printf("\t\tk = %d\n", k_olp);
				k_olp++;
			} while (k_olp <= 3);
			printf("\n\n");
			j_olp++;
		} while (j_olp <= 5);
		printf("n\n");
		i_olp++;
	} while (i_olp <= 10);
	return (0);
}