#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void){

	//function prototype
	int MyStrlen(char*);

	//variable declarations
	char* chArray_olp = NULL;
	int iStringLength_olp = 0;

	//code
	printf("\n\n");
	chArray_olp = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_olp == NULL) {
		printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}


	printf("\n\n");
	printf("Enter A String: \n\n");
	gets_s(chArray_olp,MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered By You is : \n\n");
	printf("%s\n", chArray_olp);


	printf("\n\n");
	iStringLength_olp = MyStrlen(chArray_olp);
	printf("Length of String Is = %d Characters !!!\n\n",iStringLength_olp);

	if (chArray_olp) {
		free(chArray_olp);
		chArray_olp = NULL;
	}

	return (0);
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