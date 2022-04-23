#include<stdio.h>

int main(int argc, char* argv[], char* envp[]) {

	//funtion prototype /declaration /signature
	void MyAddition(int,int);

	//variable declations
	int  a_olp,b_olp;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b_olp);

	MyAddition(a_olp,b_olp);
	
	return(0);
}

void MyAddition(int a_olp,int b_olp) {

	//Variable declarations : local Variables to MyAddition()

	int sum_olp;

	//code
	sum_olp = a_olp + b_olp;
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_olp,b_olp,sum_olp);
}