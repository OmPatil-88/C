#include<stdio.h>

int main(void) {

	//variable declarations
	int iArray_olp[] = { 9,30,6,12,98,95,20,23,2,45 };
	int int_size_olp;
	int iArray_size_olp;
	int iArray_num_elements_olp;

	float fArray_olp[] = { 1.2f,2.3f,3.4f,4.5f,5.6f,6.7f,7.8f,8.9f };
	int float_size_olp;
	int fArray_size_olp;
	int fArray_num_elements_olp;

	char cArray_olp[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P' };
	int char_size_olp;
	int cArray_size_olp;
	int cArray_num_elements_olp;

	int i_olp;
	//code

	//*************iArray_olp[]************
	printf("\n\n");

	int_size_olp = sizeof(int);
	iArray_size_olp = sizeof(iArray_olp);
	iArray_num_elements_olp = iArray_size_olp / int_size_olp;

	printf("In-line Initialization And Loop(for) Display Of Elements of Array 'iArray[]':\n\n");
	for (i_olp = 0; i_olp < iArray_num_elements_olp; i_olp++) {
		printf("iArray[%d] (Element %d) = %d\n",i_olp,(i_olp+1),iArray_olp[i_olp]);
	}
	
	printf("\n\n");
	printf("Size Of Data type 'int'                           =%d bytes\n", int_size_olp);
	printf("Number Of Elements In 'int' Array 'iArray[]'      =%d Elements\n", iArray_num_elements_olp);
	printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes) =%d Bytes\n\n", iArray_num_elements_olp, int_size_olp, iArray_size_olp);

	//*************fArray_olp[]************
	printf("\n\n");
	printf("In-line Initialization And Loop(for) Display Of Elements of Array 'fArray[]':\n\n");
	
	float_size_olp = sizeof(float);
	fArray_size_olp = sizeof(fArray_olp);
	fArray_num_elements_olp = fArray_size_olp / float_size_olp;

	for (i_olp = 0; i_olp < fArray_num_elements_olp; i_olp++) {
		printf("fArray[%d] (Element %d) = %f\n",i_olp,(i_olp+1),fArray_olp[i_olp]);
	}
	printf("\n\n");
	printf("Size Of Data type 'float'                           =%d bytes\n", float_size_olp);
	printf("Number Of Elements In 'float' Array 'fArray[]'      =%d Elements\n", fArray_num_elements_olp);
	printf("Size Of Array 'fArray[]' (%d Elements * %d Bytes) =%d Bytes\n\n", fArray_num_elements_olp, float_size_olp, fArray_size_olp);


	//*************cArray_olp[]************
	printf("\n\n");
	printf("In-line Initialization Loop(for) Display Of Elements of Array 'cArray[]':\n\n");
	
	char_size_olp = sizeof(char);
	cArray_size_olp = sizeof(cArray_olp);
	cArray_num_elements_olp = cArray_size_olp / char_size_olp;

	for (i_olp = 0; i_olp < cArray_num_elements_olp; i_olp++) {
		printf("cArray[%d] (Element %d) =%c\n",i_olp,(i_olp+1),cArray_olp[i_olp]);
	}
	printf("\n\n");
	printf("Size Of Data type 'char'                           =%d bytes\n", char_size_olp);
	printf("Number Of Elements In 'char' Array 'cArray[]'      =%d Elements\n", cArray_num_elements_olp);
	printf("Size Of Array 'cArray[]' (%d Elements * %d Bytes)  =%d Bytes\n\n", cArray_num_elements_olp, char_size_olp, cArray_size_olp);



	return (0);

}