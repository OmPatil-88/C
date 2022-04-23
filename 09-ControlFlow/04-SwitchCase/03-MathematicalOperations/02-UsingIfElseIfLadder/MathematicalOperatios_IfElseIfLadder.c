#include<stdio.h>
#include<conio.h>

int main(void) {

	//variable declarations
	int a_olp, b_olp;
	int result_olp;

	char option_olp, option_division_olp;

	//code
	printf("\n\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("Enter Value For 'B' : ");
	scanf("%d", &b_olp);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Subtraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n");
	printf("Enter Option :");
	option_olp = getch();

	printf("\n\n");

	if (option_olp == 'A' || option_olp == 'a') {
		result_olp = a_olp + b_olp;
		printf("Addition Of A=%d And B = %d Gives Result %d !!!\n\n", a_olp, b_olp, result_olp);
	}
	else if (option_olp == 'S' || option_olp == 's')
	{		
		if (a_olp >= b_olp) {
			result_olp = a_olp - b_olp;
			printf("Subtraction Of A=%d And B = %d Gives Result %d !!!\n\n", a_olp, b_olp, result_olp);
		
		}
		else {
			result_olp = b_olp - a_olp;
			printf("Subtraction Of B=%d And A = %d Gives Result %d !!!\n\n", a_olp, b_olp, result_olp);
		
		}
    }
	else if (option_olp == 'M' || option_olp == 'm') {
		result_olp = a_olp * b_olp;
		printf("Multiplication Of A=%d And B = %d Gives Result %d !!!\n\n", a_olp, b_olp, result_olp);
	}
	else if (option_olp == 'D' || option_olp == 'd') {
		printf("Enter Option In Character :\n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Division :\n ");
		printf("'R' or 'r' or '%%' For Quotient Upon Division :\n ");
		printf("Enter Option : ");
		option_division_olp = getch();

		printf("\n\n");
		if (option_division_olp == 'Q' || option_division_olp == 'q' || option_division_olp == '/')
		{
			if (a_olp >= b_olp) {
				result_olp = a_olp / b_olp;
				printf("Division Of A =%d And B = %d Gives Quotient %d !!!\n\n", a_olp, b_olp, result_olp);

			}
			else {
				result_olp = b_olp / a_olp;
				printf("Division Of B =%d And A = %d Gives Quotient %d !!!\n\n", a_olp, b_olp, result_olp);

			}
		}
		else if(option_division_olp=='R'||option_division_olp=='r'||option_division_olp=='%')
		if (a_olp >= b_olp) {
				result_olp = a_olp % b_olp;
				printf("Division Of A =%d And B = %d Gives Remainder %d !!!\n\n", a_olp, b_olp, result_olp);

			}
		else {
				result_olp = b_olp / a_olp;
				printf("Division Of B =%d And A = %d Gives Remainder %d !!!\n\n", a_olp, b_olp, result_olp);
			}
		else{
			printf("Invalid Character %c Entered For Division !!! Please Try Again... \n\n", option_division_olp);
	
		}
	}
	else{
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option_olp);
	}
	printf("If-ElseIf-Else ladderBlock Complete !!!\n");
	return(0);
}