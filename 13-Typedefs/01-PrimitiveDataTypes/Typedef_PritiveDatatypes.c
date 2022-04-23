#include<stdio.h>

//Global typedef

typedef int MY_INT_OLP;

int main(void) {

	//Function prototype
	MY_INT_OLP Add(MY_INT_OLP, MY_INT_OLP);

	//Typedefs
	typedef int MY_INT_OLP;

	typedef float OLP_FLOAT;

	typedef char CHARACTER_OLP;

	typedef double MY_DOUBLE_OLP;

	//Just Like In Win32SDK

	typedef unsigned int UINT;
	typedef UINT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE;

	//variable declarations
	MY_INT_OLP a_olp = 10, i_olp;
	MY_INT_OLP iArray_olp[] = { 9,18,27,36,45,54,63,72,81,90 };

	OLP_FLOAT f_olp = 30.9f;
	const OLP_FLOAT f_olp_pi = 3.14f;

	CHARACTER_OLP ch = '*';
	CHARACTER_OLP chArray_01_olp[] = "Hello";
	CHARACTER_OLP chArray_02_olp[][10] = { "RTR","BATCH","2020-2021" };
	
	MY_DOUBLE_OLP d_olp = 8.041997;

	UINT uint_olp = 3456;
	HANDLE handle_olp = 987;
	HWND hwnd_olp = 9876;
	HINSTANCE hInstance_olp = 14466;

	//code
	printf("\n\n");
	printf("Type MY_INT variable a = %d\n",a_olp);

	printf("\n\n");
	for (i_olp = 0; i_olp < (sizeof(iArray_olp) / sizeof(int)); i_olp++) {

		printf("Type MY_INT array variable iArray[%d] = %d\n", i_olp, iArray_olp[i_olp]);
	}
	printf("\n\n");
	printf("Type OLP_FLOAT variable f = %f\n", f_olp);
	printf("Type OLP_FLOAT construct f_olp_pi = %f", f_olp_pi);

	printf("\n\n");
	printf("Type MY_DOUBLE variable d = %lf\n", d_olp);

	printf("\n\n");
	printf("Type CHARACTER variable ch = %c\n", ch);

	printf("\n\n");
	printf("Type CHARACTER array variable chArray_01 = %s\n", chArray_01_olp);

	printf("\n\n");
	for (i_olp; i_olp < (sizeof(chArray_02_olp) / sizeof(chArray_02_olp[0])); i_olp) {
		printf("%s\t", chArray_02_olp[i_olp]);
	}
	printf("\n\n");
	printf("Type UINT variable uint = %u \n\n", uint_olp);
	printf("Type HANDLE variable handle =%u\n\n", handle_olp);
	printf("Type HWND variable hwnd = %u\n\n", hwnd_olp);
	printf("Type HINSTANCE variable hInstance = %u\n\n", hInstance_olp);
	printf("\n\n");

	MY_INT_OLP x_olp = 90;
	MY_INT_OLP y_olp = 30;
	MY_INT_OLP ret_olp;

	ret_olp = Add(x_olp, y_olp);
	printf("ret = %d\n\n", ret_olp);
    
	return(0);
}

MY_INT_OLP Add(MY_INT_OLP a_olp, MY_INT_OLP b_olp) {
	//code
	MY_INT_OLP c_olp;
	c_olp = a_olp + b_olp;
	return(c_olp);
}