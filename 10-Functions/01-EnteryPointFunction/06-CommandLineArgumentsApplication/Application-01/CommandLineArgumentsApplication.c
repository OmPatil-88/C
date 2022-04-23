#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[]) {
	
	//variable declarations
	int i_olp;
	int num_olp;
	int sum_olp = 0;
	
	//code
	if (argc == 1) {
		printf("\n\n");
		printf("No NUmbers Given For Addition !!! Exiting now ...\n\n");
		printf("Usage : CommandLineArgumentsApplication <first number> <second Number> ...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Sum Of All Integer Command Line Arguments Is : \n\n");
	for (i_olp = 1; i_olp < argc; i_olp++) {
		num_olp = atoi(argv[i_olp]);
		sum_olp = sum_olp + num_olp;
	}
	printf("Sum = %d\n\n", sum_olp);
	return (0);
}