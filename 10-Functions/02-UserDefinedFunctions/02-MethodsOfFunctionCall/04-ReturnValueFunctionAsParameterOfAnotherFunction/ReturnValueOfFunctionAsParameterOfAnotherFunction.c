#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//function prototype OR declrations
	int MyAddition(int, int);

	//variable declrations
	int r_olp;
	int num_01_olp, num_02_olp;
	int num_03_olp, num_04_olp;

	//code
	num_01_olp = 10;
	num_02_olp = 20;
	num_03_olp = 30;
	num_04_olp = 40;

	r_olp = MyAddition(MyAddition(num_01_olp, num_02_olp), MyAddition(num_03_olp, num_04_olp));

	printf("\n\n");
	printf("%d + %d + %d + %d = %d\n", num_01_olp, num_02_olp, num_03_olp, num_04_olp, r_olp);
	printf("\n\n");

	return(0);
}

int MyAddition(int a_olp, int b_olp) {
	
	//variable declration
	int sum_olp;

	//code
	sum_olp = a_olp + b_olp;
	return(sum_olp);
}