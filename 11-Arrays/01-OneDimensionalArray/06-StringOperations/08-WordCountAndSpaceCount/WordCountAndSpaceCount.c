#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declrations
	char chArray_olp[MAX_STRING_LENGTH];
	int iStringLength_olp;
	int i_olp;
	int word_count_olp = 0, space_count_olp = 0;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_olp, MAX_STRING_LENGTH);

	iStringLength_olp = MyStrlen(chArray_olp);

	for (i_olp = 0; i_olp < iStringLength_olp; i_olp++) {

		switch (chArray_olp[i_olp])
		{
		case 32:
			space_count_olp++;
			break;
		default:
			break;
		}
	}
	word_count_olp = space_count_olp + 1;

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_olp);

	printf("\n\n");
	printf("Number Of Space In The Input String = %d\n\n",space_count_olp);
	printf("Number Of Words In The Input String =%d\n\n",word_count_olp);
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


