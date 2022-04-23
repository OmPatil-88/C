#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declrations
	char chArray_Original_olp[MAX_STRING_LENGTH],chArray_VowelsReplaced_olp[MAX_STRING_LENGTH];
	int iStringLength_olp;
	int i_olp;
	
	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_olp, MAX_STRING_LENGTH);

	MyStrcpy(chArray_VowelsReplaced_olp, chArray_Original_olp);
	iStringLength_olp = MyStrlen(chArray_VowelsReplaced_olp);

	for (i_olp = 0; i_olp < iStringLength_olp; i_olp++) {

		switch (chArray_Original_olp[i_olp])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			chArray_VowelsReplaced_olp[i_olp] = '*';
			break;
		default:
			break;
		}
	}

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_Original_olp);

	printf("\n\n");
	printf("String After Replacement Of Vowels By * Is : \n\n");
	printf("%s\n", chArray_VowelsReplaced_olp);
	return (0);


}

int MyStrlen(char str[]) {

	//variable declarations
	int j_olp;
	int string_length = 0;
	for (j_olp = 0; j_olp < MAX_STRING_LENGTH; j_olp++) {
		if (str[j_olp] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);

}

void MyStrcpy(char str_destinations[], char str_source[]) {

	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength = 0;
	int j_olp;

	//code
	iStringLength = MyStrlen(str_source);
	for (j_olp = 0; j_olp < iStringLength; j_olp++) {
		str_destinations[j_olp] = str_source[j_olp];
	}
	str_destinations[j_olp] = '\0';
}
