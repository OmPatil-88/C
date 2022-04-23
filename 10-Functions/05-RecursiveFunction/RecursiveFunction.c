#include<stdio.h>

int main(int argc, char* argv[], char* envp) {

	//variable declerations
	unsigned int num_olp;

	//function prototype
	void recursive(unsigned int);

	//code
	printf("\n\n");
	printf("Enter Any number : \n\n");
	scanf("%u", &num_olp);

	printf("\n\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(num_olp);
	printf("\n\n");

	return (0);
}

void recursive(unsigned int n_olp) {
   
	//code 
	printf("n = %d\n", n_olp);
	if (n_olp > 0) {
		recursive(n_olp - 1);
	}
}