#include<stdio.h>
int main(void) {

	//variable declarations
	int num_olp;

	//code
	printf("\n\n");

	printf("Enter Value For 'Num' : ");
	scanf("%d", &num_olp);
	if (num_olp < 0) {
		printf("Num = %d Is Less Than 0(NEGATIVE) !!!\n\n", num_olp);
	}
	else {
		if ((num_olp > 0) && (num_olp <= 100)) {
			printf("Num=%d Is Between 0 to 100!!!\n\n", num_olp);
		}
		else {
			if ((num_olp > 100) && (num_olp <= 200)) {
				printf("Num=%d Is Between 100 to 200!!!\n\n", num_olp);
			}
			else {
				if ((num_olp > 200) && (num_olp <= 300)) {
					printf("Num=%d Is Between 200 to 300!!!\n\n", num_olp);
				}
				else {
					if ((num_olp > 300) && (num_olp <= 400)) {
						printf("Num=%d Is Between 300 to 400!!!\n\n", num_olp);
					}
					else {
						if ((num_olp > 400) && (num_olp <= 500)) {
							printf("Num=%d Is Between 400 to 500!!!\n\n", num_olp);
						}
						else {
								printf("Num=%d Is Greateer than 500!!!\n\n", num_olp);
						}
					}
				}
			}
		}
	}

}