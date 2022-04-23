#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//function prototype OR declrations
	int MyAddition(int, int);

	//variable declrations
	int num_01_olp, num_02_olp;

	//code
	num_01_olp = 10;
	num_02_olp = 20;
	
    printf("\n\n");
	printf("%d + %d = %d\n", num_01_olp, num_02_olp,MyAddition(num_01_olp,num_02_olp));
	printf("\n\n");

	return(0);
}

int MyAddition(int a_olp, int b_olp) {

	//variable declration
	int Add(int, int);

	//code
	return Add(a_olp,b_olp);
}

int Add(int x_olp, int y_olp) {
	//code
	return (x_olp + y_olp);
}