#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {
  
	//variable declarations
	int i_olp;

	//code
	printf("\n\n");
	printf("Hello Worlds !!!\n\n");

	printf("Number Of Command Line Arguments = %d \n\n", argc);

	printf("Command Line Arguments Passed To This Program Are : \n\n");

	for (i_olp = 0; i_olp < argc; i_olp++) {
		printf("Command Line Argument Number %d = %s \n", (i + 1), argv[i]);
	}

	printf("\n\n");

	printf("First 20 Environmental Variables Passed To This Program Are : \n\n");
	for (i_olp = 0; i_olp < 20; i_olp++) {
		printf("Environmental Variable Number %d = %s\n", (i + 1), envp[i]);
	}
	printf("\n\n");
	return (0);

}