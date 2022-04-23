#include<stdio.h>

int main(void) {

    //variable declarations
    int num_olp = 5;
    const int* const ptr_olp = &num_olp;

    //code
    printf("\n");
    printf("Current Value Of 'num' =%d\n", num_olp);
    printf("Current 'ptr' (Address of 'num') = %p\n", ptr_olp);

    num_olp++;
    printf("\n\n");
    printf("After num++,value of 'num' =%d\n", num_olp);

    //(*ptr)++;
   // ptr_olp++;
    
    return(0);
}