#include<stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '
#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void) {

	//function prototype
	int MyStrlen(char[]);
	char MyToUpper(char);

	//variable declrations
	char chArray_olp[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH];
	int iStringLength_olp;
	int i_olp, j_olp;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_olp, MAX_STRING_LENGTH);

	iStringLength_olp = MyStrlen(chArray_olp);
	j_olp = 0;
	for (i_olp = 0; i_olp < iStringLength_olp; i_olp++) {
		if (i_olp == 0) {
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp] = MyToUpper(chArray_olp[i_olp]);
		}
		else if (chArray_olp[i_olp] == SPACE) {
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp] = chArray_olp[i_olp];
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp + 1] = MyToUpper(chArray_olp[i_olp + 1]);

			j_olp++;
			i_olp++;
		}
		else if ((chArray_olp[i_olp] == FULLSTOP || chArray_olp[i_olp] == COMMA || chArray_olp[i_olp] == EXCLAMATION || chArray_olp[i_olp] == QUESTION_MARK) && (chArray_olp[i_olp] != SPACE)) {
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp] = chArray_olp[i_olp];
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp + 1] = SPACE;
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp + 2] = MyToUpper(chArray_olp[i_olp + 1]);
		    
			j_olp = j_olp + 2;
			i_olp++;
		}
		else
			chArray_CapitalizedFirstLetterOfEveryWord[j_olp] = chArray_olp[i_olp];
		j_olp++;
	}
	chArray_CapitalizedFirstLetterOfEveryWord[j_olp] = '\0';

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_olp);

	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", chArray_CapitalizedFirstLetterOfEveryWord);

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

char MyToUpper(char ch) {

	//varibale declaration
	int num_olp;
	int c_olp;

	//code
	num_olp = 'a' - 'A';
	if ((int)ch >= 97 && (int)ch <= 122) {
		c_olp = (int)ch - num_olp;
		return ((char)c_olp);
	}
	else {
		return (ch);
	}
}


