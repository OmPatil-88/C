#include<stdio.h>
#include<stdlib.h>

int main(void) {

	//variable declarations
	int **ptr_iArray_olp=NULL;
	int i_olp, j_olp;
	int num_rows_olp, num_columns_olp;

   //code
	
	printf("\n\n");
	printf("Enter Number Of Rows : ");
	scanf("%d", &num_rows_olp);
	

	printf("\n\n");
	printf("Enter Number Of Columns : ");
	scanf("%d", &num_columns_olp);

	printf("\n\n");
	printf("************ MEMORY ALLOCATION TO 2D INTEGER ARRAY ************\n\n");
	ptr_iArray_olp = (int**)malloc(num_rows_olp*sizeof(int*));
	if (ptr_iArray_olp == NULL) {
		printf("FAILED TO ALLOCATE MEMORY TO %d ROWS OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", num_rows_olp);
		exit(0);
	}
	else {
		printf("MEMORY ALLOCATION TO %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n",num_rows_olp);
	}

	for (i_olp = 0; i_olp < num_rows_olp; i_olp++) {
		ptr_iArray_olp[i_olp] = (int*)malloc(num_columns_olp  * sizeof(int));
		if (ptr_iArray_olp[i_olp] == NULL) {
			printf("FAILED TO ALLOCATE MEMRY TO ROW %d OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", i_olp);
			exit(0);
		}
		else {
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_olp);
		}
	}
	for (i_olp = 0; i_olp < num_rows_olp; i_olp++) {
		for (j_olp = 0; j_olp < num_columns_olp; j_olp++) {
			ptr_iArray_olp[i_olp][j_olp] = (i_olp + 1) * (j_olp + 1);
		}
	}

	for (i_olp = 0; i_olp < num_rows_olp; i_olp++) {
		printf("Base Address of Row %d : ptr_iArray[%d] %p \t At Address : %p\n", i_olp, i_olp, ptr_iArray_olp[i_olp], &ptr_iArray_olp[i_olp]);
	}

	printf("\n\n");
	for (i_olp = 0; i_olp < num_rows_olp; i_olp++) {
		for (j_olp = 0; j_olp < num_columns_olp; j_olp++) {
			printf("ptr_iArray[% d][% d] =%d\n", i_olp, j_olp,ptr_iArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	for (i_olp = (num_rows_olp - 1); i_olp >= 0; i_olp--) {

		if (ptr_iArray_olp[i_olp]) {
			free(ptr_iArray_olp[i_olp]);
			ptr_iArray_olp[i_olp] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_olp);

		}
	}
     
	if (ptr_iArray_olp) {
		free(ptr_iArray_olp);
		ptr_iArray_olp = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return (0);
}