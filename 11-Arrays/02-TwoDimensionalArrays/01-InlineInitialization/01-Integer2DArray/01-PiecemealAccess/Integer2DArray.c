#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[5][3] = { {1,2,3}, {2,4,6},{3,6,9},{4,8,12},{5,10,15}};

	int int_size_olp;
	int iArray_size_olp;
	int iArray_num_elements_olp, iArray_num_rows_olp, iArray_num_columns_olp;

	//code
	printf("\n\n");

	int_size_olp = sizeof(int);
	iArray_size_olp = sizeof(iArray_olp);
	printf("Size Of Two Dimensional ( 2D ) Integer Array is %d\n\n", iArray_size_olp);
    
	iArray_num_rows_olp = iArray_size_olp / sizeof(iArray_olp[0]);
    printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_rows_olp);

	iArray_num_columns_olp = sizeof(iArray_olp[0])/int_size_olp;
	printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_columns_olp);
    
	iArray_num_elements_olp = iArray_num_rows_olp * iArray_num_columns_olp;
	printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_elements_olp);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	// *** ROW 1 ***
	printf("****** ROW 1 ******\n");
	printf("iArray[0][0] = %d\n", iArray_olp[0][0]);
	printf("iArray[0][1] = %d\n", iArray_olp[0][1]);
	printf("iArray[0][2] = %d\n", iArray_olp[0][2]);

	printf("****** ROW 1 ******\n");
	printf("iArray[0][0] = %d\n", iArray_olp[0][0]);
	printf("iArray[0][1] = %d\n", iArray_olp[0][1]);
	printf("iArray[0][2] = %d\n", iArray_olp[0][2]);

	printf("****** ROW 2 ******\n");
	printf("iArray[1][0] = %d\n", iArray_olp[1][0]);
	printf("iArray[1][1] = %d\n", iArray_olp[1][1]);
	printf("iArray[1][2] = %d\n", iArray_olp[1][2]);

	printf("****** ROW 3 ******\n");
	printf("iArray[2][0] = %d\n", iArray_olp[2][0]);
	printf("iArray[2][1] = %d\n", iArray_olp[2][1]);
	printf("iArray[2][2] = %d\n", iArray_olp[2][2]);

	printf("****** ROW 4 ******\n");
	printf("iArray[3][0] = %d\n", iArray_olp[3][0]);
	printf("iArray[3][1] = %d\n", iArray_olp[3][1]);
	printf("iArray[3][2] = %d\n", iArray_olp[3][2]);

	printf("****** ROW 5 ******\n");
	printf("iArray[4][0] = %d\n", iArray_olp[4][0]);
	printf("iArray[4][1] = %d\n", iArray_olp[4][1]);
	printf("iArray[4][2] = %d\n", iArray_olp[4][2]);

	printf("\n\n");
	return (0);
}