#include<stdio.h>
int main(void) {
	//variable declarations
	int i_olp;

	//code
	printf("\n\n");

	printf("Printing Digits 10 to 1 : \n\n");
	i_olp = 10;
	do{
		printf("\t%d\n", i_olp);
		i_olp--;
	}while (i_olp >= 1);
	printf("\n\n");

	return (0);
}
