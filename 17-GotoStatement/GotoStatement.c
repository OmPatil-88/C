#include<stdio.h>
#include<string.h>

int main(void) {

	//variable declarations
	char ch_olp, ch_i_olp;
	unsigned int ascii_ch_olp = 0;

	//code
	printf("\n\n");
	printf("Ennter The First Character Of First Name : ");
	ch_olp=getch();

	ch_olp = toupper(ch_olp);

	for (ch_i_olp = 'A'; ch_i_olp <= 'Z'; ch_i_olp++) {
		if (ch_olp == ch_i_olp) {
			ascii_ch_olp = (unsigned int)ch_olp;
			goto result_output;
		}
	}

	printf("\n\n");
	printf("Goto statement not executed so printing \"Hello world !!!\n");
	
result_output:

	printf("\n\n");
	if (ascii_ch_olp == 0) {
		printf("You must have stange name! Could not find the character '%c' in the entire English Alphabets!\n", ch_olp);
	}
	else {
		printf("Character '%c' found.It has ASCII value %u.\n",ch_olp,ascii_ch_olp);
	}
	printf("\n\n");
	return(0);
}