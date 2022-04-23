#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray_olp[MAX_STRING_LENGTH];
	int iStringLength_olp = 0;

	//code

	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_olp, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_olp);

	//String Length
	printf("\n\n");
	iStringLength_olp = MyStrlen(chArray_olp);
	printf("Length Of String Is = %d Characters !!! \n\n", iStringLength_olp);

	return (0);
}

int MyStrlen(char str_olp[]) {

	//variable declarations
	int j_olp;
	int string_length_olp = 0;

	//code
	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str_olp[j_olp] == '\0')
			break;
		else
			string_length_olp++;
	}
	return string_length_olp;
}