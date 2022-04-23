#include<stdio.h>
int main(void) {

	//variable declarations
	int i_olp;
	char ch_olp;

	//code
	printf("\n\n");

	printf("Printing Even From 0 to 100 For Every User Input.Exiting the Loop When User Enters Character 'Q' or 'q' : \n\n");
	printf("Enter Character 'Q' or 'q' To Exit Loop :\n\n");

	for (i_olp = 0; i_olp <= 100; i_olp++) {
		printf("\t%d\n", i_olp);
		ch_olp = getche();
		if (ch_olp == 'Q' || ch_olp == 'q') {
			break;
		}

	}
	printf("\n\n");
	printf("\EXITTING LOOP...");
	printf("\n\n");
	return (0);
}