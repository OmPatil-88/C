#include<stdio.h>
int main(void) {

	//variable declarations
	int iArrayOne_olp[10];
	int iArrayTwo_olp[10];

	//code

	//*********iArrayOne_olp[]**********
	iArrayOne_olp[0] = 3;
	iArrayOne_olp[1] = 6;
	iArrayOne_olp[2] = 9;
	iArrayOne_olp[3] = 12;
	iArrayOne_olp[4] = 15;
	iArrayOne_olp[5] = 18;
	iArrayOne_olp[6] = 21;
	iArrayOne_olp[7] = 24;
	iArrayOne_olp[8] = 27;
	iArrayOne_olp[9] = 30;

	printf("\n\n");

	printf("Piece-meal (Hard-coded) Assignment And Display Of Elements to Array 'iArrayOne[]':\n\n");
	printf("1st Element Of Array 'isArrayOne[]' Or Element At 0th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[0]);
	printf("2nd Element Of Array 'isArrayOne[]' Or Element At 1st Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[1]);
	printf("3rd Element Of Array 'isArrayOne[]' Or Element At 2nd Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[2]);
	printf("4th Element Of Array 'isArrayOne[]' Or Element At 3rd Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[3]);
	printf("5th Element Of Array 'isArrayOne[]' Or Element At 4th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[4]);
	printf("6th Element Of Array 'isArrayOne[]' Or Element At 5th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[5]);
	printf("7th Element Of Array 'isArrayOne[]' Or Element At 6th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[6]);
	printf("8th Element Of Array 'isArrayOne[]' Or Element At 7th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[7]);
	printf("9th Element Of Array 'isArrayOne[]' Or Element At 8th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[8]);
	printf("10th Element Of Array 'isArrayOne[]' Or Element At 9th Index Of Array 'iArrayOne[]' = %d\n", iArrayOne_olp[9]);


	//**********iArrayTwo[]************

	printf("\n\n");
	printf("Enter 1st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[0]);

	printf("\nEnter 2nd Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[1]);

	printf("\nEnter 3rd Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[2]);

	printf("\nEnter 4th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[3]);

	printf("\nEnter 5th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[4]);

	printf("\nEnter 6th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[5]);

	printf("\nEnter 7th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[6]);

	printf("\nEnter 8th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[7]);

	printf("\nEnter 9th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[8]);

	printf("\nEnter 10th Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo_olp[9]);


	printf("\n\n");

	printf("Piece-meal (User Input) Assignment And Display Of Elements to Array 'iArrayTwo[]':\n\n");
	printf("1st Element Of Array 'iArrayTwo[]' Or Element At 0th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[0]);
	printf("2nd Element Of Array 'iArrayTwo[]' Or Element At 1st Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[1]);
	printf("3rd Element Of Array 'iArrayTwo[]' Or Element At 2nd Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[2]);
	printf("4th Element Of Array 'iArrayTwo[]' Or Element At 3rd Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[3]);
	printf("5th Element Of Array 'iArrayTwo[]' Or Element At 4th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[4]);
	printf("6th Element Of Array 'iArrayTwo[]' Or Element At 5th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[5]);
	printf("7th Element Of Array 'iArrayTwo[]' Or Element At 6th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[6]);
	printf("8th Element Of Array 'iArrayTwo[]' Or Element At 7th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[7]);
	printf("9th Element Of Array 'iArrayTwo[]' Or Element At 8th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[8]);
	printf("10th Element Of Array 'iArrayTwo[]' Or Element At 9th Index Of Array 'iArrayTwo[]' = %d\n", iArrayTwo_olp[9]);


	return (0);
}