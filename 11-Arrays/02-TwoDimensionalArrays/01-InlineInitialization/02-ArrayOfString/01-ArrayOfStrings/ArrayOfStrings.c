#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char strArray_olp[10][15] = { "Hello!","Welcome","To","Real","Time","Rendering","Batch","(2020-21)","Of","ASTROMEDICOMP." };

	int char_size_olp;
	int strArray_size_olp;
	int strArray_num_elements_olp, strArray_num_rows_olp, strArray_num_columns_olp;
	int strActual_num_chars_olp = 0;
	int i_olp;

	//code
	printf("\n\n");
	char_size_olp = sizeof(char);

	strArray_size_olp = sizeof(strArray_olp);
	printf("Size of Two Dimensional ( 2D ) Character Array (String Array) is = %d\n\n", strArray_size_olp);

	strArray_num_rows_olp = strArray_size_olp / sizeof(strArray_olp[0]);
	printf("Number of Rows (Strings) in Two Dimensional ( 2D ) Character Array (String Array) Is = %d \n\n", strArray_num_rows_olp);

	strArray_num_columns_olp = sizeof(strArray_olp[0])/char_size_olp;
	printf("Number of Columns (Strings) in Two Dimensional ( 2D ) Character Array (String Array) Is = %d \n\n", strArray_num_columns_olp);

	strArray_num_elements_olp = strArray_num_columns_olp * strArray_num_rows_olp;
	printf("Number of Elements In Two Dimensional ( 2D ) Character Array(string Array) Is = %d\n\n", strArray_num_elements_olp);

	for (i_olp = 0; i_olp < strArray_num_rows_olp; i_olp++) {
		strActual_num_chars_olp = strActual_num_chars_olp + MyStrlen(strArray_olp[i_olp]);
	}
	printf("Actual Number of Elements (Characters) In Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", strActual_num_chars_olp);
	printf("\n\n");
	printf("Strings In The 2D Array :\n\n");

	printf("%s ", strArray_olp[0]);
	printf("%s ", strArray_olp[1]);
	printf("%s ", strArray_olp[2]);
	printf("%s ", strArray_olp[3]);
	printf("%s ", strArray_olp[4]);
	printf("%s ", strArray_olp[5]);
	printf("%s ", strArray_olp[6]);
	printf("%s ", strArray_olp[7]);
	printf("%s ", strArray_olp[8]);
	printf("%s \n\n", strArray_olp[9]);
	return (0);
}

int MyStrlen(char str[]) {
	//variable declrations
	int j_olp;
	int string_length = 0;

	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str[j_olp] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);

}