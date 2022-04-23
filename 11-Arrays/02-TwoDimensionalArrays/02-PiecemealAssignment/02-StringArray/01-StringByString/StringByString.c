#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcpy(char[], char[]);

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
	MyStrcpy(strArray_olp[0], "My");
	MyStrcpy(strArray_olp[1], "NAME");
	MyStrcpy(strArray_olp[2], "IS");
	MyStrcpy(strArray_olp[3], "OM");
	MyStrcpy(strArray_olp[4], "PATIL");

	printf("\n\n");
	printf("Strings In The 2D Array :\n\n");

	for (i_olp = 0; i_olp < strArray_num_rows_olp; i_olp++)
	{
		printf("%s ", strArray_olp[i_olp]);
	}
	printf("\n\n");
	return (0);
}

void MyStrcpy(char str_destination[], char str_source[]) {
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_olp = 0;
	int j_olp;

	//code
	iStringLength_olp = MyStrlen(str_source);
	for (j_olp = 0; j_olp < iStringLength_olp; j_olp++)
		str_destination[j_olp] = str_source[j_olp];
	str_destination[j_olp] = '\0';

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
