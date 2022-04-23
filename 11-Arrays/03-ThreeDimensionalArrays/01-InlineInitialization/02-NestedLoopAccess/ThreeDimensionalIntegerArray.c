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
	int i_olp, j_olp, k_olp;
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

	iArray_num_elements_olp = iArray_width_olp * iArray_height_olp * iArray_depth_olp;
	printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_num_elements_olp);

	printf("\n\n");
	printf("Elements In The 3D Array : \n\n");

	for (i_olp = 0; i_olp < iArray_width_olp; i_olp++)
	{
		printf("****** ROW %d ******\n", (i_olp + 1));
		for (j_olp = 0; j_olp < iArray_height_olp; j_olp++) 
		{
			printf("****** COLUMN %d ******\n", (j_olp + 1));
			for (k_olp = 0; k_olp < iArray_depth_olp; k_olp++) {
				printf("iArray[%d][%d][%d] =%d\n",i_olp,j_olp,k_olp,iArray_olp[i_olp][j_olp][k_olp]);
			}
			printf("\n");
		}
		printf("\n\n");
	}


	return (0);
}