#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void) {

	//varibale declarations
	int iArray_2D_olp[NUM_ROWS][NUM_COLUMNS];

	int iArray_1D_olp[NUM_ROWS * NUM_COLUMNS];

	int i_olp, j_olp;

	int num_olp;

	//code
	printf("Enter Elements Of Your Choice To Fill Up THe Integer 2D Array : \n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {

		printf("For ROW NUMBER %d : \n", (i_olp + 1));
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			printf("Enter Element Number %d :\n", (j_olp + 1));
			scanf("%d", &num_olp);
			iArray_2D_olp[i_olp][j_olp] = num_olp;
		}
		printf("\n");
	}

	//Display 2D Array
	printf("\n\n");
	printf("Two-Dimensional ( 2D ) Attay Of Integer :\n\n");
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {

		printf("****** ROW %d ******\n", (i_olp + 1));
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			printf("iArray_2D[%d][%d] = [%d] :\n",(i_olp+1) ,(j_olp + 1), iArray_2D_olp[i_olp][j_olp]);
	    }
		printf("\n");
	}

	//Convert 2D Integer Array To 1D Integer Array
	for (i_olp = 0; i_olp < NUM_ROWS; i_olp++) {
           
		for (j_olp = 0; j_olp < NUM_COLUMNS; j_olp++) {
			iArray_1D_olp[(i_olp * NUM_COLUMNS) + j_olp] = iArray_2D_olp[i_olp][j_olp];
		}
	}

	//Printing 1D Array
	printf("\n\n");
	printf("One-Diensional ( 1D ) Array Of Integers : \n\n");
	for (i_olp = 0; i_olp < (NUM_ROWS * NUM_COLUMNS); i_olp++) {
		printf("iArray_1D[%d] = %d\n", i_olp, iArray_1D_olp[i_olp]);
	}
	printf("\n\n");
	return (0);
}