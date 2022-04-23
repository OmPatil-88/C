#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcpy(char*,char*);
	int MyStrlen(char*);
	
	//variable declarations

	char* chArray_Original_olp = NULL, * chArray_Copy_olp = NULL;

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

	chArray_Copy_olp = (char*)malloc(Original_string_length_olp * sizeof(char));
	if (chArray_Copy_olp == NULL) {
		printf("MEMORY ALLOCATION TO COPIED STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	MyStrcpy(chArray_Copy_olp, chArray_Original_olp);
	printf("\n\n");
	printf("The Original String  Entered By You (i.e :'chArray_original') Is: \n\n");
	printf("%s\n", chArray_Original_olp);

	printf("\n\n");
	printf("The Copied String Entered By You (i.e :'chArray_original') Is: \n\n");
	printf("%s\n", chArray_Copy_olp);

	if (chArray_Copy_olp) {
		free(chArray_Copy_olp);
		chArray_Copy_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR COPIED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (chArray_Original_olp) {
		free(chArray_Original_olp);
		chArray_Original_olp = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}
void MyStrcpy(char* str_destination, char* str_source) {

	//function prototype
	int MyStrlen(char*);

	//variable declarations

	int iStringLength_olp = 0;
	int j_olp;

	iStringLength_olp = MyStrlen(str_source);
	for (j_olp = 0; j_olp < iStringLength_olp; j_olp++)
		*(str_destination + j_olp) = *(str_source + j_olp);

	*(str_destination + j_olp) = '\0';
}

int MyStrlen(char* str) {

	//variable declarations
	int j_olp;
	int string_length_olp = 0;

	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str[j_olp] == '\0') {
			break;
		}
		else
		{
			string_length_olp++;
		}
	}
	return (string_length_olp);
}