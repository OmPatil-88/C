#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//function prototype
	int MyStrlen(char[]);

	//variable declrations
	char chArray_olp[MAX_STRING_LENGTH],chArray_SpaceRemoved[MAX_STRING_LENGTH];
	int iStringLength_olp;
	int i_olp,j_olp;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_olp, MAX_STRING_LENGTH);

	iStringLength_olp = MyStrlen(chArray_olp);
	j_olp = 0;
	for (i_olp = 0; i_olp < iStringLength_olp; i_olp++) {

		if (chArray_olp[i_olp] == ' ')
			continue;
		else {
			chArray_SpaceRemoved[j_olp] = chArray_olp[i_olp];
			j_olp++;
		}
	}
	chArray_SpaceRemoved[j_olp] = '\0';

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_olp);

	printf("\n\n");
	printf("String After Removal Of Space Is : \n\n");
	printf("%s\n", chArray_SpaceRemoved);
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


