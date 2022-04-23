#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(void) {

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

	strcat(chArray_One_olp, chArray_Two_olp);
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