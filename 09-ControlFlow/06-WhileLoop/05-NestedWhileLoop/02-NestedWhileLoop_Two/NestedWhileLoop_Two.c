#include<stdio.h>
int main(void) {

	//variable declarations

	int i_olp, j_olp,k_olp;

	//code
	printf("\n\n");
	i_olp = 1; 
	while(i_olp <= 10) {
		printf("i = %d\n", i_olp);
		printf("--------\n\n");
		j_olp = 1; 
		while(j_olp <= 5) {
			printf("\tj = %d\n", j_olp);
			printf("\t--------\n\n");
			k_olp = 1; 
			while(k_olp <= 3) {
				printf("\t\tk = %d\n", k_olp);
				k_olp++;
			}
			printf("\n\n");
			j_olp++;
		}
		printf("n\n");
		i_olp++;
	}
	return (0);
}