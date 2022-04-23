#include<stdio.h>

int main(void) {

	//variable declaration
	int iArray_One_olp[5];
	int iArray_Two_olp[5][3];
	int iArray_Three_olp[100][100][5];

	int num_rows_2D_olp;
	int num_columns_2D_olp;
	
	int num_rows_3D_olp;
	int num_columns_3D_olp;
	int depth_3d_olp;


	//code
	printf("\n\n");
	printf("Size of 1-D integer array iArray_One = %lu \n", sizeof(iArray_One_olp));
	printf("Number of elements in 1-D integer array iArray_One =%lu\n", (sizeof(iArray_One_olp)/sizeof(int)));
	
	printf("\n\n");
	printf("Size of 2-D integer array iArray_Two = %lu \n", sizeof(iArray_Two_olp));
	printf("Number of rows in 2-D integer array iArray_Two =%lu\n", (sizeof(iArray_Two_olp) / sizeof(iArray_Two_olp[0])));
	
	num_rows_2D_olp = (sizeof(iArray_Two_olp) / sizeof(iArray_Two_olp[0]));

	printf("Number of elements (columns) in each row in 2-D in 2-D integer array iArray_Two = %lu\n", (sizeof(iArray_Two_olp[0]) / sizeof(iArray_Two_olp[0][0])));
	num_columns_2D_olp = (sizeof(iArray_Two_olp[0]) / sizeof(iArray_Two_olp[0][0]));

	printf("Number of elements in total iArray_Two = %d\n", (num_rows_2D_olp * num_columns_2D_olp));

	printf("\n\n");

	printf("\n\n");
	printf("Size of 3-D Integer array IArray_Three = %lu\n", sizeof(iArray_Three_olp));
	printf("Number of rows in 3-d integer array iArray_Three = %lu\n", (sizeof(iArray_Three_olp) / sizeof(iArray_Three_olp[0])));
	
	num_rows_3D_olp = (sizeof(iArray_Three_olp) / sizeof(iArray_Three_olp[0]));

	printf("Number of elements (columns) in one row in 3-D integer array iArray_Three = %lu\n", (sizeof(iArray_Three_olp[0]) / sizeof(iArray_Three_olp[0][0])));
	num_columns_3D_olp = (sizeof(iArray_Three_olp[0]) / sizeof(iArray_Three_olp[0][0]));
	printf("Number of elemetns (depth) in one column in one row in 3-D integer array iArray_Three =%lu\n",(sizeof(iArray_Three_olp[0][0])/sizeof(iArray_Three_olp[0][0][0])));
	depth_3d_olp = (sizeof(iArray_Three_olp[0][0]) / sizeof(iArray_Three_olp[0][0][0]));
	printf("Number of elements intotal in 3-D Array iArray_Three =%d\n",(num_rows_3D_olp*num_columns_3D_olp*depth_3d_olp));
	printf("\n\n");
	return(0);
}