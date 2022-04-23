#include<stdio.h>
int main(void) {
	//variable declarations
	int i_olp,j_olp;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 10 and 10 to 100: \n\n");
	i_olp = 1;
	j_olp = 10; 
	do{
 		printf("\t%d \t %d \n",i_olp,j_olp);
		i_olp++; j_olp = j_olp + 10;
	} while (i_olp <= 10, j_olp <= 100);
	printf("\n\n");

	return (0);
}
