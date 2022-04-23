#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[5][3] = { {1,2,3}, {2,4,6},{3,6,9},{4,8,12},{5,10,15} };

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

	for (i_olp = 0; i_olp < iArray_num_rows_olp; i_olp++) {
		printf("****** ROW %d ******\n", i_olp + 1);
		for (j_olp = 0; j_olp < iArray_num_columns_olp; j_olp++) {
			printf("iArray[%d][%d] = %d\n", i_olp,j_olp,iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	

	printf("\n\n");
	return (0);
}