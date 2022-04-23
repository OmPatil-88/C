#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	void MyStrcat(char[], char[]);
	//variable declarations
	char chArray_One_olp[MAX_STRING_LENGTH], chArray_Two_olp[MAX_STRING_LENGTH];

	//code
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One_olp, MAX_STRING_LENGTH);


	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two_olp, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("****** BEFORE CONCATENATION ******");
	printf("\n\n");
	printf("The Original First String String Entered By you (i.e 'chArray_One[]') Is :\n\n");
	printf("%s\n", chArray_One_olp);

	printf("\n\n");
	printf("The Original Second String String Entered By you (i.e 'chArray_Two[]') Is :\n\n");
	printf("%s\n", chArray_Two_olp);

	MyStrcat(chArray_One_olp, chArray_Two_olp);
	printf("\n\n");
	printf("****** AFTER CONCATENATION *******");
	printf("\n\n");
	printf("'chArray_One[]' Is : \n\n");
	printf("%s\n", chArray_One_olp);


	printf("\n\n");
	printf("'chArray_Two[]' Is : \n\n");
	printf("%s\n", chArray_Two_olp);

	return (0);
}

void MyStrcat(char str_destination[], char str_source[]) {
    
	//function prototype
	int MyStrlen(char[]);

	//varibale declarations
	int iStringLength_Source_olp = 0, iStringLength_Destination_olp = 0;
	int i_olp, j_olp;

	//code
	iStringLength_Source_olp = MyStrlen(str_source);
	iStringLength_Destination_olp = MyStrlen(str_destination);

	for (i_olp = iStringLength_Destination_olp, j_olp = 0; j_olp < iStringLength_Source_olp; i_olp++, j_olp++) {
		str_destination[i_olp] = str_source[j_olp];
	}
	str_destination[i_olp] = '\0';
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