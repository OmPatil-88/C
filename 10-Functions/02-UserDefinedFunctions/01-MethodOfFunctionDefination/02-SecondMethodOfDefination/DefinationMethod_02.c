#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//funtion prototype /declaration /signature
	int MyAddition(void);

	//variable declations
	int result_olp;
	
	//code
	result_olp =MyAddition();
	printf("\n\n");
	printf("Sum = %d\n\n",result_olp);

	return(0);
}

int MyAddition(void) {

	//Variable declarations : local Variables to MyAddition()

	int a_olp, b_olp, sum_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b_olp);

	sum_olp = a_olp + b_olp;

	return sum_olp;
	}