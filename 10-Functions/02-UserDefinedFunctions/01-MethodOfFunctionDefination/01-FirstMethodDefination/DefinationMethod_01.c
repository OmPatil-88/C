#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//funtion prototype /declaration /signature
	void MyAddition(void);

	//code

	MyAddition();
	return(0);
}

void MyAddition(void) {

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

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_olp, b_olp, sum_olp);
}