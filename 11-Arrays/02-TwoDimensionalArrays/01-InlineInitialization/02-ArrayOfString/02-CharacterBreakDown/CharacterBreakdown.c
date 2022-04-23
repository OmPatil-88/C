#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char strArray_olp[10][15] = { "Hello!","Welcome","To","Real","Time","Rendering","Batch","(2020-21)","Of","ASTROMEDICOMP." };

	char iStrLengths_olp[10];
	int strArray_size_olp;
	int strArray_num_rows_olp;
	int i_olp,j_olp;

	//code
	printf("\n\n");
	strArray_size_olp = sizeof(strArray_olp);
	strArray_num_rows_olp = strArray_size_olp / sizeof(strArray_olp[0]);
	
	for (i_olp = 0; i_olp < strArray_num_rows_olp; i_olp++) {
		iStrLengths_olp[i_olp] = MyStrlen(strArray_olp[i_olp]);
	}
	printf("\n\n");
	printf("The Entire String Array : \n\n");
	for (i_olp; i_olp < strArray_num_rows_olp; i_olp++) {
		printf("%s ", strArray_olp[i_olp]);
	}

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	for (i_olp = 0; i_olp < strArray_num_rows_olp; i_olp++) {
		printf("String Number %d => %s\n\n", (i_olp + 1), (strArray_olp[i_olp]));
		for (j_olp = 0; j_olp < iStrLengths_olp[i_olp]; j_olp++) {
			printf("Character [%d] =%c\n", (j_olp + 1), strArray_olp[i_olp][j_olp]);
		}
		printf("\n\n");
	}
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