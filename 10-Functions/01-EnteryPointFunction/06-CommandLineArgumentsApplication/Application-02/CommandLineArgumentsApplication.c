#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[]) {

	//variable declarations
	int i_olp;
	
	//code
	if (argc == 1) {
		printf("\n\n");
		printf("Invalid Usage !!! Exiting now ...\n\n");
		printf("Usage : CommandLineArgumentsApplication <first name> <middle name> <surname> ...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Your Full Name Is : ");
	for (i_olp = 1; i_olp < argc; i_olp++) {
		printf("%s ", argv[i_olp]);
	}
	printf("\n\n");
	return (0);
}