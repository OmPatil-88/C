#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void) {

	//variable declarations
	int i_olp, j_olp;

	int **ptr_iArray_olp = NULL;
	//code

	printf("\n\n");
	ptr_iArray_olp = (int**)malloc(NUM_ROWS * sizeof(int*));
	if (ptr_iArray_olp == NULL) {
		printf("MEMEORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS FAILED !!! EXITING NOW...\n\n", NUM_ROWS);
		exit(0);
	}
	else
	{
		printf("MEMEORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS SUCCEEDED !!!\n\n", NUM_ROWS);

	}
	for (i_olp = 0; i_olp<NUM_ROWS; i_olp++) {
		*(ptr_iArray_olp+i_olp) = (int*)malloc(NUM_COLUMNS * sizeof(int));
		//OR  ptr_iArray_olp[i]
		if (ptr_iArray_olp == NULL) {
			printf("MEMEORY ALLOCATION TO THE COLUMN OF BASE ROW %d FAILED !!! EXITING NOW...\n\n",i_olp);
			exit(0);
		}
		else
			printf("MEMEORY ALLOCATION TO THE COLUMN OF BASE ROW %d SUCCEEDED !!!\n\n", i_olp);
		
	}
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			*(*(ptr_iArray_olp+i_olp) + j_olp) = (i_olp + 1) * (j_olp + 1);
		}
	}
	

	printf("\n\n");
	printf("2d Integer Array Elements Along With Addresses : \n\n");
	for(i_olp=0;i_olp<NUM_ROWS;i_olp++){
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			printf("ptr_iarray[%d][%d] = %d \t\t At Address &ptr_iArray[%d][%d]\n",i_olp,j_olp,ptr_iArray_olp[i_olp][j_olp], i_olp, j_olp, &ptr_iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	for (i_olp = (NUM_ROWS - 1); i_olp >= 0; i_olp--) {
		if (*(ptr_iArray_olp + i_olp)) {
			free(*(ptr_iArray_olp + i_olp));
			*(ptr_iArray_olp + i_olp) = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!! \n\n", i_olp);
		}
   }
	if (ptr_iArray_olp) {

		free(ptr_iArray_olp);
		ptr_iArray_olp = NULL;
		printf("MEMEORY ALLOCATED TO ptr_iArray HAS BEEN SUCCEEFULLY FREED !!!\n\n");
	}


	return(0);
}