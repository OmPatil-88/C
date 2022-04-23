#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[3][5];

	int int_size_olp;
	int iArray_size_olp;
	int iArray_num_elements_olp, iArray_num_rows_olp, iArray_num_columns_olp;
	int i_olp, j_olp;

	//code
	printf("\n\n");

	int_size_olp = sizeof(int);
	iArray_size_olp = sizeof(iArray_olp);
	printf("Size Of Two Dimensional ( 2D ) Integer Array is %d\n\n", iArray_size_olp);

	iArray_num_rows_olp = iArray_size_olp / sizeof(iArray_olp[0]);
	printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_rows_olp);

	iArray_num_columns_olp = sizeof(iArray_olp[0]) / int_size_olp;
	printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_columns_olp);

	iArray_num_elements_olp = iArray_num_rows_olp * iArray_num_columns_olp;
	printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_elements_olp);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	iArray_olp[0][0] = 21;
	iArray_olp[0][1] = 42;
	iArray_olp[0][2] = 63;
	iArray_olp[0][3] = 84;
	iArray_olp[0][4] = 105;

	iArray_olp[1][0] = 22;
	iArray_olp[1][1] = 44;
	iArray_olp[1][2] = 66;
	iArray_olp[1][3] = 88;
	iArray_olp[1][4] = 110;

	iArray_olp[2][0] = 23;
	iArray_olp[2][1] = 46;
	iArray_olp[2][2] = 69;
	iArray_olp[2][3] = 92;
	iArray_olp[2][4] = 115;

	for (i_olp = 0; i_olp < iArray_num_rows_olp; i_olp++) {
		printf("****** ROW %d ******\n", i_olp + 1);
		for (j_olp = 0; j_olp < iArray_num_columns_olp; j_olp++) {
			printf("iArray[%d][%d] = %d\n", i_olp, j_olp, iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	return (0);
}