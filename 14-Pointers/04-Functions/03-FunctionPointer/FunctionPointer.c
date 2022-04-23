#include<stdio.h>

int main(void) {
     
     //function declarations
    int AddIntegers_olp(int, int);
    int SubtractIntegers_olp(int, int);
    float AddFloats_olp(float, float);

    //variable declaration
    typedef int (*AddIntsFnPtr_olp)(int, int);
    AddIntsFnPtr_olp ptrAddTwoIntegers_olp = NULL;
    AddIntsFnPtr_olp ptrFunc_olp = NULL;

    typedef float (*AddFloatsFnPtr_olp)(float,float);
    AddFloatsFnPtr_olp ptrAddTwoFloats_olp = NULL;

    int iAnswer_olp = 0;
    float fAnswer_olp = 0.0f;

    //code
    ptrAddTwoIntegers_olp = AddIntegers_olp;
    iAnswer_olp = ptrAddTwoIntegers_olp(9, 30);
    printf("\n\n");
    printf("Sum Of Integers = %d\n\n", iAnswer_olp);

    ptrFunc_olp = SubtractIntegers_olp;
    iAnswer_olp = ptrFunc_olp(9, 30);
    printf("\n\n");
    printf("Subtraction Of Integers = %d\n\n", iAnswer_olp);

    ptrAddTwoFloats_olp = AddFloats_olp;
    fAnswer_olp = ptrAddTwoFloats_olp(11.45f, 8.2f);
    printf("\n\n");
    printf("Sum Of Floating-Point Numbers =%f\n\n", fAnswer_olp);

    return(0);
}

int AddIntegers_olp(int a, int b) {
    
    //variable declarations
    int c;
    //code
    c = a + b;
    return (c);
}

int SubtractIntegers_olp(int a, int b) {
     
     //variable declarations
    int c;
    //code
    if (a > b)
        c = a - b;
    else
        c = b - a;
    return c;
}
float AddFloats_olp(float f_num1, float f_num2) {

   //variable declarations
    float ans;

    //code
    ans = f_num1 + f_num2;
    return (ans);
}
