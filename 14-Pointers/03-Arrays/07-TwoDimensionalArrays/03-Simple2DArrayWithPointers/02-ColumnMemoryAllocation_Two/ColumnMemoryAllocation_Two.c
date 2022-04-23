#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS_ONE 3
#define NUM_COLUMNS_TWO 8

int main(void) {

	//variable declarations
	int* iArray_olp[NUM_ROWS];
	int i_olp, j_olp;

	//code
	printf("\n\n");
	printf("******** FIRST MEMORY ALLOCATION TO 2D INTEGER ARRAY *********\n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		iArray_olp[i_olp] = (int*)malloc(NUM_COLUMNS_ONE * sizeof(int));
		if (iArray_olp[i_olp] == NULL) {
			printf("FAILED TO ALLOCATE MEMRY TO ROW %d OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n",i_olp);
			exit(0);
		}
		else {
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_olp);
		}
	}
	
	for (i_olp=0; i_olp<NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS_ONE; j_olp++) {
			iArray_olp[i_olp][j_olp] = (i_olp + 1) * (j_olp + 1);
		}
	}

	printf("\n\n");
	printf("DISPLAYING 2D ARRAY :\n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS_ONE; j_olp++) {
			printf("iArray[% d][% d] =%d\n",i_olp,j_olp,iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	for (i_olp = (NUM_ROWS - 1); i_olp >= 0; i_olp--) {
		free(iArray_olp[i_olp]);
		iArray_olp[i_olp] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n",i_olp);
	}

	printf("/n/n");
	printf("******** SECOND MEMORY ALLOCATION TO 2D INTEGER ARRAY *********\n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		iArray_olp[i_olp] = (int*)malloc(NUM_COLUMNS_TWO * sizeof(int));
		if (iArray_olp[i_olp] == NULL) {
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", i_olp);
			exit(0);
		}
		else {
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_olp);
		}
	}

	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS_TWO; j_olp++) {
			iArray_olp[i_olp][j_olp] = (i_olp + 1) * (j_olp + 1);
		}
	}

	printf("\n\n");
	printf("DISPLAYING 2D ARRAY :\n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS_TWO; j_olp++) {
			printf("iArray[% d][% d] =%d\n", i_olp, j_olp, iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	for (i_olp = (NUM_ROWS - 1); i_olp >= 0; i_olp--) {
		free(iArray_olp[i_olp]);
		iArray_olp[i_olp] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_olp);
	}

	
	return (0);
}