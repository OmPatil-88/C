#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(void) {

	//variable declarations
	char chArray_Original_olp[MAX_STRING_LENGTH], chArray_Copy_olp[MAX_STRING_LENGTH];

	//code

	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_olp, MAX_STRING_LENGTH);

	strcpy(chArray_Copy_olp, chArray_Original_olp);

	printf("\n\n");
	printf("The Original String Entered By You (i.e. :'chArray_Original[]') Is :\n\n");
	printf("%s\n", chArray_Original_olp);

	printf("\n\n");
	printf("The Copied String (i.e :'chArray_Copy[]') Is : \n\n");
	printf("%s\n", chArray_Copy_olp);
     
	return(0);
}