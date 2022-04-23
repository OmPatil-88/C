#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void) {
    
     //variable declarations
    char chArray_olp[MAX_STRING_LENGTH];

    //code
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(chArray_olp, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered By You Is :\n\n");
    printf("%s\n", chArray_olp);
    return (0);

}