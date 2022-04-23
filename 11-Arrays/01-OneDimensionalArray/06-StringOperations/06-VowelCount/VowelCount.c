#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declrations
	char chArray_olp[MAX_STRING_LENGTH];
	int iStringLength_olp;
	int count_A_olp = 0,count_E_olp=0,count_I_olp=0,count_O_olp=0,count_U_olp=0;
    int i_olp;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_olp, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_olp);

	iStringLength_olp =MyStrlen(chArray_olp);

	for (i_olp = 0; i_olp < iStringLength_olp; i_olp++) {

		switch (chArray_olp[i_olp])
		{
		case 'A':
		case 'a':
			count_A_olp++;
			break;
		case 'E':
		case 'e':
			count_E_olp++;
			break;
		case 'I':
		case 'i':
			count_I_olp++;
			break;
		case 'O':
		case 'o':
			count_O_olp++;
			break;
		case 'U':
		case 'u':
			count_U_olp++;
			break;
		default:
			break;
		}
	}

	printf("\n\n");
	printf("In The String Entered By You, The Vowels And The Number Of Their Occurences Are follows : \n\n");
	printf("'A' Has Occured = %d Times !!!\n\n", count_A_olp);
	printf("'E' Has Occured = %d Times !!!\n\n", count_E_olp);
	printf("'I' Has Occured = %d Times !!!\n\n", count_I_olp);
	printf("'O' Has Occured = %d Times !!!\n\n", count_O_olp);
	printf("'U' Has Occured = %d Times !!!\n\n", count_U_olp);
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