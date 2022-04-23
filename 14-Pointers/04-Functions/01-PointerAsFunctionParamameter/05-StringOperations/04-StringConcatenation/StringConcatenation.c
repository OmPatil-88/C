#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcat(char*, char*);
	int MyStrlen(char*);

	//variable declarations

	char* chArray_One_olp = NULL, * chArray_Two_olp = NULL;

	//code
	printf("\n\n");
	chArray_One_olp = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_One_olp == NULL) {
		printf("MEMORY ALLOCATION TO FIRST STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter First String: \n\n");
	gets_s(chArray_One_olp, MAX_STRING_LENGTH);

	printf("\n\n");
	chArray_Two_olp = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Two_olp == NULL) {
		printf("MEMORY ALLOCATION TO SECOND STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter Second String: \n\n");
	gets_s(chArray_Two_olp, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("The Original First String  Entered By You (i.e :'chArray_original') Is: \n\n");
	printf("%s\n", chArray_One_olp);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e :'chArray_Reversed') Is: \n\n");
	printf("%s\n", chArray_Two_olp);

	MyStrcat(chArray_One_olp, chArray_Two_olp);

	printf("\n\n");
	printf("***** AFTER CONCATENATION ******");
	printf("\n\n");
	printf("'chArray_one[]' Is : \n\n");
	printf("%s\n", chArray_One_olp);

	printf("\n\n");
	printf("'chArray_Two[]' Is : \n\n");
	printf("%s\n", chArray_Two_olp);

	if (chArray_One_olp) {
		free(chArray_One_olp);
		chArray_One_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR FIRST STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (chArray_Two_olp) {
		free(chArray_Two_olp);
		chArray_Two_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR SECOND STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}


void MyStrcat(char *str_destination, char *str_source) {

	//varibale declarations
	int iStringLength_Source_olp = 0, iStringLength_Destination_olp = 0;
	int i_olp, j_olp;

	//code
	iStringLength_Source_olp = MyStrlen(str_source);
	iStringLength_Destination_olp = MyStrlen(str_destination);

	for (i_olp = iStringLength_Destination_olp, j_olp = 0; j_olp < iStringLength_Source_olp; i_olp++, j_olp++) {
		str_destination[i_olp] = str_source[j_olp];
	}
	str_destination[i_olp] = '\0';
}

int MyStrlen(char* str) {

	//variable declarations
	int j_olp;
	int string_length_olp = 0;

	//code
	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str[j_olp] == '\0')
			break;
		else
			string_length_olp++;
	}
	return string_length_olp;
}