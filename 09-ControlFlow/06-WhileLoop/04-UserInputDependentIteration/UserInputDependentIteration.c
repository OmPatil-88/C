#include<stdio.h>
int main(void) {

	//variable declarations
	int i_num_olp, num_olp, i_olp;
	//code
	printf("\n\n");
	printf("Enter An Integer Value From Which Iteration Must Begin : ");
	scanf("%d", &i_num_olp);

	printf("How Many Digits Do You Want TO Print From %d Onwords ? :", i_num_olp);
	scanf("%d", &num_olp);

	printf("Printing Digits %d to %d : \n\n", i_num_olp, (i_num_olp + num_olp));

	i_olp = i_num_olp; 
	while(i_olp <= (i_num_olp + num_olp)){
		printf("\t%d\n", i_olp);
		i_olp++;
	}
	printf("\n\n");
	return(0);
}