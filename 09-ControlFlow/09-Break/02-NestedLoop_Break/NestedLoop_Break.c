#include<stdio.h>
#include<conio.h>

int main(void) {

	//variable declarations
	int i_olp, j_olp;

	//code
	for(i_olp=1;i_olp<=20;i_olp++){
		for (j_olp = 1; j_olp <= 20; j_olp++) {
			if (j_olp > 1) {
				break;
			}
			else {
				printf("* ");
			}
	  }
		printf("\n");
	}
	printf("\n\n");
	return(0);
}