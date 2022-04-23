#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function declarations
	char* ReplaceVowelsWithHashSymbol(char*);

	//variable declaration
	char string_olp[MAX_STRING_LENGTH];
	char* replaced_string_olp = NULL;

	//code
	printf("\n\n");
	printf("Enter String : ");
	gets_s(string_olp, MAX_STRING_LENGTH);

	replaced_string_olp = ReplaceVowelsWithHashSymbol(string_olp);
	if (replaced_string_olp == NULL) {
		printf("ReplaceVowelsWithHashSymbol() Function Has Failed !!! Exiting Now...\n\n");
		exit(0);
	}
	printf("\n\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", replaced_string_olp);
	if (replaced_string_olp) {
		free(replaced_string_olp);
		replaced_string_olp = NULL;
	}
	return (0);
}

char* ReplaceVowelsWithHashSymbol(char* s) {

	//function prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	//Variable declarations
	char* new_string_olp = NULL;
	int i_olp;

	new_string_olp = (char*)malloc(MyStrlen(s) * sizeof(char));
	if (new_string_olp == NULL) {
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}
	MyStrcpy(new_string_olp, s);
	for (i_olp=0; i_olp < MyStrlen(new_string_olp); i_olp++) {
		switch (new_string_olp[i_olp])
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
			new_string_olp[i_olp] = '#';
			break;
		default:
			break;
		}
	}
	return (new_string_olp);
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

	for (j_olp=0; j_olp < MAX_STRING_LENGTH; j_olp++) {
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