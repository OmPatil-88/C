#include<stdio.h>

#define MAX_NUMBER(a,b)((a>b) ? a:b)

int main(int argc, char* argv[], char* envp[]) {

     //variable decleration
    int iNum_01_olp;
    int iNum_02_olp;
    int iResult_olp;

    float fNum_01_olp;
    float fNum_02_olp;
    float fResult_olp;

    //code

    //Comparing Integer Values
    printf("\n\n");
    printf("Enter An Integer Number : \n\n");
    scanf("%d", &iNum_01_olp);
    

    printf("\n\n");
    printf("Enter Another Integer Number : \n\n");
    scanf("%d", &iNum_02_olp);

    iResult_olp = MAX_NUMBER(iNum_01_olp, iNum_02_olp);

    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER() = %d\n",iResult_olp);
    printf("\n\n");


    //Comparing Float Values
    printf("\n\n");
    printf("Enter An Floating Point Number: \n\n");
    scanf("%f", &fNum_01_olp);


    printf("\n\n");
    printf("Enter Another Floating Point Number : \n\n");
    scanf("%f", &fNum_02_olp);

    fResult_olp = MAX_NUMBER(fNum_01_olp, fNum_02_olp);

    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER() = %f\n", fResult_olp);
    printf("\n\n");

    printf("\n\n");
    return (0);
}