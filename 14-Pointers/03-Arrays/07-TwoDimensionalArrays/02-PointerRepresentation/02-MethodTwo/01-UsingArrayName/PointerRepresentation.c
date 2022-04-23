#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void) {

	//variable declarations
	int iArray_olp[NUM_ROWS][NUM_COLUMNS];
	int i_olp, j_olp;

	//code
	for (i_olp = 0; i_olp<NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			*(*(iArray_olp+i_olp)+j_olp) = (i_olp + 1) * (j_olp + 1);
		}
	}
	printf("\n\n");
	printf("2d Integer Array Elements Along With Addresses : \n\n");
	for(i_olp=0;i_olp<NUM_ROWS;i_olp++){
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			printf("*(*(iArray+%d)+%d) =%d \t\t At Address (*(iArray+%d)+%d) : %p\n",i_olp,j_olp, *(*(iArray_olp + i_olp) + j_olp), i_olp, j_olp, (*(iArray_olp + i_olp) + j_olp));
		}
		printf("\n\n");
	}

	return(0);
}