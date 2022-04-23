#include<stdio.h>
#include<string.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRING 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINNING 65

struct MyDataOne {
	int iArray_olp[INT_ARRAY_SIZE];
	float fArray_olp[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo {
	char cArray_olp[CHAR_ARRAY_SIZE];
	char strArray[NUM_STRING][MAX_CHARACTERS_PER_STRING];
};

int main(void) {

	// variable declarations
	struct MyDataOne data_one_olp;
	struct MyDataTwo data_two_olp;
	int i_olp;

	// code
	// *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	data_one_olp.fArray_olp[0] = 0.1f;
	data_one_olp.fArray_olp[1] = 1.2f;
	data_one_olp.fArray_olp[2] = 2.3f;
	data_one_olp.fArray_olp[3] = 3.4f;
	data_one_olp.fArray_olp[4] = 4.5f;

	//*** Loop Assignement (USER Input) ***
	printf("\n\n");
	printf("Enter %d Integer : \n\n",INT_ARRAY_SIZE);
	for (i_olp = 0; i_olp < INT_ARRAY_SIZE; i_olp++) {
		scanf("%d", &data_one_olp.iArray_olp[i_olp]);
	}
	// *** Loop Assignment (HARD-CODED) ***
	for (i_olp = 0; i_olp < CHAR_ARRAY_SIZE; i_olp++)
		data_two_olp.cArray_olp[i_olp] = (char)(i_olp + ALPHABET_BEGINNING);

	// *** PIECE-MEAL Assignment (Hard-Coded) ***
	strcpy(data_two_olp.strArray[0], "Welcome !!!");
	strcpy(data_two_olp.strArray[1], "This");
	strcpy(data_two_olp.strArray[2], "Is");
	strcpy(data_two_olp.strArray[3], "ASTROMEDICOMP'S");
	strcpy(data_two_olp.strArray[4], "Real");
	strcpy(data_two_olp.strArray[5], "Time");
	strcpy(data_two_olp.strArray[6], "Rendering");
	strcpy(data_two_olp.strArray[7], "Batch");
	strcpy(data_two_olp.strArray[8], "Of");
	strcpy(data_two_olp.strArray[9], "2020-2021 !!!");

	printf("\n\n");
	printf("Members Of 'Struct DataOne' Alongwith Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Integer Array (data_one.iArray[]) : \n\n");
	for (i_olp = 0; i_olp < INT_ARRAY_SIZE; i_olp++)	{
		printf("data_one.iArray[%d] = %d\n",i_olp,data_one_olp.iArray_olp[i_olp]);
	}

	printf("Floating-Point Array (data_one.fArray[]) : \n\n");
	for (i_olp = 0; i_olp < FLOAT_ARRAY_SIZE; i_olp++) {
		printf("data_one.fArray[%d] = %f\n", i_olp, data_one_olp.fArray_olp[i_olp]);
	}

	
	printf("\n\n");
	printf("Members Of 'Struct DataTwo' Alongwith Their Assigned Values Are : \n\n");

	
	printf("\n\n");
	printf("Character Array (data_two.cArray[]) : \n\n");
	for (i_olp = 0; i_olp < CHAR_ARRAY_SIZE; i_olp++) {
		printf("data_two.cArray[%d] = %c\n", i_olp, data_two_olp.cArray_olp[i_olp]);
	}

	
	printf("String Array (data_two.strArray[]) : \n\n");
	for (i_olp = 0; i_olp < NUM_STRING; i_olp++)
	printf("%s ",data_two_olp.strArray[i_olp]);
	
	printf("\n\n");

	return (0);
}