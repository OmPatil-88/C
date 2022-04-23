#include<stdio.h>

int main(void) {

    //variable declarations
    int a_olp;
    int b_olp;
    int result_olp;

    //code 
    printf("\n\n");
    printf("Enter One Integer : ");
    scanf("%d", &a_olp);

    printf("\n\n");
    printf("Enter Another Integer : ");
    scanf("%d", &b_olp);

    printf("\n\n");
    printf("If Answer = 0, It is 'FALSE' .\n");
    printf("If Answer = 1, Is is 'TRUE' .\n\n");
    
    result_olp = (a_olp < b_olp);
    printf("(a < b)  A = %d Is Less Than B = %d               \t Answer = %d \n", a_olp, b_olp, result_olp);
    
    result_olp = (a_olp > b_olp);
    printf("(a > b)  A = %d Is Greater Than B = %d            \t Answer = %d \n", a_olp, b_olp, result_olp);

    result_olp = (a_olp <= b_olp);
    printf("(a <= b) A = %d Is Less Than Or Equal To B = %d   \t Answer = %d \n", a_olp, b_olp, result_olp);

    result_olp = (a_olp >= b_olp);
    printf("(a >= b) A = %d Is Greater Than Or Equal To B = %d\t Answer = %d \n", a_olp, b_olp, result_olp);

    result_olp = (a_olp == b_olp);
    printf("(a == b) A = %d Is Equal Than B = %d              \t Answer = %d \n", a_olp, b_olp, result_olp);

    result_olp = (a_olp != b_olp);
    printf("(a != b) A = %d Is Not Equal Than B = %d          \t Answer = %d \n", a_olp, b_olp, result_olp);

    return (0);
}