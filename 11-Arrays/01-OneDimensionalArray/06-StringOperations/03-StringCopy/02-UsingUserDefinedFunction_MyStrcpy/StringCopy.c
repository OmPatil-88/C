#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_Original_olp[MAX_STRING_LENGTH], chArray_Copy_olp[MAX_STRING_LENGTH];

	//code

	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_olp, MAX_STRING_LENGTH);

	MyStrcpy(chArray_Copy_olp, chArray_Original_olp);

	printf("\n\n");
	printf("The Original String Entered By You (i.e. :'chArray_Original[]') Is :\n\n");
	printf("%s\n", chArray_Original_olp);

	printf("\n\n");
	printf("The Copied String (i.e :'chArray_Copy[]') Is : \n\n");
	printf("%s\n", chArray_Copy_olp);

	return(0);
}

void MyStrcpy(char str_destination[], char str_source[]) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_olp = 0;
	int j_olp;

	//code
	iStringLength_olp = MyStrlen(str_source);
	for (j_olp = 0; j_olp < iStringLength_olp; j_olp++) {
		str_destination[j_olp] = str_source[j_olp];
	}
	str_destination[j_olp] = '\0';
}

int MyStrlen(char str[]) {

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