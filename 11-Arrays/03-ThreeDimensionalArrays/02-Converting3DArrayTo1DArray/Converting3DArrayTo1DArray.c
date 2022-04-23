#include<stdio.h>

#define NUM_ROWS_OLP 5
#define NUM_COLUMNS_OLP 3
#define DEPTH_OLP 2

int main(void) {

	//variable declrations

	//IN-LINE IniTIALIZATION
	int iArray_olp[NUM_ROWS_OLP][NUM_COLUMNS_OLP][DEPTH_OLP]= { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
							                                { { 8, 16 }, { 24, 32 }, { 40, 48 } },
															{ { 7, 14 }, { 21, 28 }, { 35, 42 } },
															{ { 6, 12 }, { 18, 24 }, { 30, 36 } },
															{ { 5, 10 }, { 15, 20 }, { 25, 30 } } };

	int i_olp, j_olp, k_olp;

	int iArray_1D_olp[NUM_ROWS_OLP * NUM_COLUMNS_OLP * DEPTH_OLP];

	//code
	printf("\n\n");
	printf("Elements In The 3D Array : \n\n");
	for (i_olp = 0; i_olp < NUM_ROWS_OLP; i_olp++) {
		printf("****** ROW %d ******\n", (i_olp + 1));
		for (j_olp = 0; j_olp < NUM_COLUMNS_OLP; j_olp++) {
			printf("****** COLUMN %d ******\n", (j_olp + 1));
			for (k_olp = 0; k_olp < DEPTH_OLP; k_olp++) {
				printf("iArray[%d][%d][%d] = %d\n", i_olp, j_olp, k_olp, iArray_olp[i_olp][j_olp][k_olp]);
			}
			printf("\n");
		}
		printf("\n");
	}

	// ****** CONVERTING 3D TO 1D ******
	for (i_olp = 0; i_olp < NUM_ROWS_OLP; i_olp++) {
		for (j_olp = 0; j_olp < NUM_COLUMNS_OLP; j_olp++) {
			for (k_olp = 0; k_olp < DEPTH_OLP; k_olp++) {
				iArray_1D_olp[(i_olp * NUM_COLUMNS_OLP * DEPTH_OLP) + (j_olp * DEPTH_OLP) + k_olp] = iArray_olp[i_olp][j_olp][k_olp];
			}
		}
	}

	// ****** DISPLAY 1D ARRAY ******
	printf("\n\n\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (i_olp = 0; i_olp < (NUM_ROWS_OLP * NUM_COLUMNS_OLP * DEPTH_OLP); i_olp++) {
		printf("iArray_1D[%d] = %d\n", i_olp, iArray_1D_olp[i_olp]);
	}
	return(0);
}