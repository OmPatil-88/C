#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrrev(char*, char*);
	int MyStrlen(char*);

	//variable declarations

	char* chArray_Original_olp = NULL, *chArray_Reversed_olp = NULL;

	int Original_string_length_olp;

	//code
	printf("\n\n");
	chArray_Original_olp = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Original_olp == NULL) {
		printf("MEMORY ALLOCATION TO ORIGINAL STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter A String: \n\n");
	gets_s(chArray_Original_olp, MAX_STRING_LENGTH);

	Original_string_length_olp = MyStrlen(chArray_Original_olp);

	chArray_Reversed_olp = (char*)malloc(Original_string_length_olp * sizeof(char));
	if (chArray_Reversed_olp == NULL) {
		printf("MEMORY ALLOCATION TO REVERSED STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	MyStrrev(chArray_Reversed_olp, chArray_Original_olp);
	printf("\n\n");
	printf("The Original String  Entered By You (i.e :'chArray_original') Is: \n\n");
	printf("%s\n", chArray_Original_olp);

	printf("\n\n");
	printf("The Reversed String Entered By You (i.e :'chArray_Reversed') Is: \n\n");
	printf("%s\n", chArray_Reversed_olp);

	if (chArray_Reversed_olp) {
		free(chArray_Reversed_olp);
		chArray_Reversed_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR REVERSED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (chArray_Original_olp) {
		free(chArray_Original_olp);
		chArray_Original_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}


void MyStrrev(char *str_destination, char *str_source) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_olp = 0;
	int i_olp, j_olp, len_olp;

	//code
	iStringLength_olp = MyStrlen(str_source);
	len_olp = iStringLength_olp - 1;
	for (i_olp = 0, j_olp = len_olp; i_olp < iStringLength_olp, j_olp >= 0; i_olp++, j_olp--) {
		str_destination[i_olp] = str_source[j_olp];
	}
	str_destination[i_olp] = '\0';
}

int MyStrlen(char *str) {

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