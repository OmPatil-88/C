#include<stdio.h>

int main(int argc, char* argv[]) {

	//variable declarations
	int i_olp;

	//code
	printf("\n\n");
	printf("Hello World !!!\n\n");
	printf("NUmber Of Command Line Arguments = %d\n\n", argc);

	printf("Command Line Arguments Passed To This Program Are : \n\n");
	for (i_olp = 0; i_olp < argc; i_olp++) {
		printf("Command Line Arguments Number %d =%s\n", (i_olp + 1), argv[i_olp]);
	}
	printf("\n\n");
	return(0);
}