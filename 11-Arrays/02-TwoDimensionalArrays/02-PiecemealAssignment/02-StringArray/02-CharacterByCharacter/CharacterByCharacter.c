#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[], char[]);

	//variable declarations
	char strArray_olp[5][10];

	int char_size_olp;
	int strArray_size_olp;
	int strArray_num_elements_olp, strArray_num_rows_olp, strArray_num_columns_olp;
	int i_olp;

	//code
	printf("\n\n");
	char_size_olp = sizeof(char);

	strArray_size_olp = sizeof(strArray_olp);
	printf("Size of Two Dimensional ( 2D ) Character Array (String Array) is = %d\n\n", strArray_size_olp);

	strArray_num_rows_olp = strArray_size_olp / sizeof(strArray_olp[0]);
	printf("Number of Rows (Strings) in Two Dimensional ( 2D ) Character Array (String Array) Is = %d \n\n", strArray_num_rows_olp);

	strArray_num_columns_olp = sizeof(strArray_olp[0]) / char_size_olp;
	printf("Number of Columns (Strings) in Two Dimensional ( 2D ) Character Array (String Array) Is = %d \n\n", strArray_num_columns_olp);

	strArray_num_elements_olp = strArray_num_columns_olp * strArray_num_rows_olp;
	printf("Maximum Number of Elements(Character) In Two Dimensional ( 2D ) Character Array(String Array) Is = %d\n\n", strArray_num_elements_olp);

	//******** PIECE-MEAL ASSIGNMENT *****

	//**********ROW 1 /STRING 1 **********
	strArray_olp[0][0] = 'M';
	strArray_olp[0][1] = 'Y';
	strArray_olp[0][2] = '\0';

	strArray_olp[1][0] = 'N';
	strArray_olp[1][1] = 'A';
	strArray_olp[1][2] = 'M';
	strArray_olp[1][3] = 'E';
	strArray_olp[1][4] = '\0';


	strArray_olp[2][0] = 'I';
	strArray_olp[2][1] = 'S';
	strArray_olp[2][2] = '\0';
    
	strArray_olp[3][0] = 'O';
	strArray_olp[3][1] = 'M';
	strArray_olp[3][2] = '\0';


	strArray_olp[4][0] = 'P';
	strArray_olp[4][1] = 'A';
	strArray_olp[4][2] = 'T';
	strArray_olp[4][3] = 'I';
	strArray_olp[4][4] = 'L';
	strArray_olp[4][5] = '\0';
	
	printf("\n\n");

	printf("The Strings In The 2D Character Are :\n\n");

	for (i_olp = 0; i_olp < strArray_num_rows_olp; i_olp++)
	{
		printf("%s ", strArray_olp[i_olp]);
	}
	printf("\n\n");
	return (0);
}



int MyStrlen(char str[]) {
	//variable declrations
	int j_olp;
	int string_length = 0;

	//code
	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str[j_olp] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);

}
