#include<stdio.h>
int main(void) {

	//variable declarations

	//IN-LINE INITIALIZATION
	int iArray_olp[5][3][2] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
							{ { 8, 16 }, { 24, 32 }, { 40, 48 } }, 
							{ { 7, 14 }, { 21, 28 }, { 35, 42 } },
							{ { 6, 12 }, { 18, 24 }, { 30, 36 } },
							{ { 5, 10 }, { 15, 20 }, { 25, 30 } } };

	int int_size_olp;
	int iArray_size_olp;
	int iArray_num_elements_olp, iArray_width_olp, iArray_height_olp, iArray_depth_olp;

	//code
	int_size_olp = sizeof(int);
	iArray_size_olp = sizeof(iArray_olp);
	printf("Size Of Three Dimensional ( 3D ) Integer Array is %d\n\n", iArray_size_olp);

	iArray_width_olp = iArray_size_olp / sizeof(iArray_olp[0]);
	printf("Number of Rows(Width) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_width_olp);

	iArray_height_olp = sizeof(iArray_olp[0]) / sizeof(iArray_olp[0][0]);
	printf("Number of Columns(Height) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_height_olp);


	iArray_depth_olp = sizeof(iArray_olp[0][0]) / int_size_olp;
	printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_depth_olp);

	iArray_num_elements_olp = iArray_width_olp * iArray_height_olp*iArray_depth_olp;
	printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_num_elements_olp);

	printf("\n\n");
	printf("Elements In The 3D Array : \n\n");

	printf("****** ROW 1 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray[0][0][0] =%d\n", iArray_olp[0][0][0]);
	printf("iArray[0][0][1] =%d\n", iArray_olp[0][0][1]);


	printf("****** COLUMN 2 ******\n");
	printf("iArray[0][1][0] =%d\n", iArray_olp[0][1][0]);
	printf("iArray[0][1][1] =%d\n", iArray_olp[0][1][1]);


	printf("****** COLUMN 3 ******\n");
	printf("iArray[0][2][0] =%d\n", iArray_olp[0][2][0]);
	printf("iArray[0][2][1] =%d\n", iArray_olp[0][2][1]);

	printf("****** ROW 2 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray[1][0][0] =%d\n", iArray_olp[1][0][0]);
	printf("iArray[1][0][1] =%d\n", iArray_olp[1][0][1]);


	printf("****** COLUMN 2 ******\n");
	printf("iArray[1][1][0] =%d\n", iArray_olp[1][1][0]);
	printf("iArray[1][1][1] =%d\n", iArray_olp[1][1][1]);


	printf("****** COLUMN 3 ******\n");
	printf("iArray[1][2][0] =%d\n", iArray_olp[1][2][0]);
	printf("iArray[1][2][1] =%d\n", iArray_olp[1][2][1]);


	printf("****** ROW 3 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray[2][0][0] =%d\n", iArray_olp[2][0][0]);
	printf("iArray[2][0][1] =%d\n", iArray_olp[2][0][1]);


	printf("****** COLUMN 2 ******\n");
	printf("iArray[2][1][0] =%d\n", iArray_olp[2][1][0]);
	printf("iArray[2][1][1] =%d\n", iArray_olp[2][1][1]);


	printf("****** COLUMN 3 ******\n");
	printf("iArray[2][2][0] =%d\n", iArray_olp[2][2][0]);
	printf("iArray[2][2][1] =%d\n", iArray_olp[2][2][1]);



	printf("****** ROW 4 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray[3][0][0] =%d\n", iArray_olp[3][0][0]);
	printf("iArray[3][0][1] =%d\n", iArray_olp[3][0][1]);


	printf("****** COLUMN 2 ******\n");
	printf("iArray[3][1][0] =%d\n", iArray_olp[3][1][0]);
	printf("iArray[3][1][1] =%d\n", iArray_olp[3][1][1]);


	printf("****** COLUMN 3 ******\n");
	printf("iArray[3][2][0] =%d\n", iArray_olp[3][2][0]);
	printf("iArray[3][2][1] =%d\n", iArray_olp[3][2][1]);



	printf("****** ROW 4 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("iArray[4][0][0] =%d\n", iArray_olp[4][0][0]);
	printf("iArray[4][0][1] =%d\n", iArray_olp[4][0][1]);


	printf("****** COLUMN 2 ******\n");
	printf("iArray[4][1][0] =%d\n", iArray_olp[4][1][0]);
	printf("iArray[4][1][1] =%d\n", iArray_olp[4][1][1]);


	printf("****** COLUMN 3 ******\n");
	printf("iArray[4][2][0] =%d\n", iArray_olp[4][2][0]);
	printf("iArray[4][2][1] =%d\n", iArray_olp[4][2][1]);



	return (0);
}