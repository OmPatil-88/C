#include<stdio.h>

int main(void) {

	//variables declarations
	int a_olp;
	int b_olp;
	int c_olp;
	int result_olp;

	//code
	printf("\n\n");
	printf("Enter First Integer : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Second Integer : ");
	scanf("%d", &b_olp);

	printf("\n\n");
	printf("Enter Third Integer : ");
	scanf("%d", &c_olp);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE' .\n");
	printf("If Answer = 1, It Is 'TRUE' .\n\n");

	result_olp = (a_olp <= b_olp) && (b_olp != c_olp);
	printf("LOGICAL AND (&&) : Answer is TRUE (1) If Only if BOTH Conditions are True. The Answer is FALSE (0), If Any One Or Both Conditions Are False.\n\n");
	printf("A = %d Is Less Than Or Equal To B = %d AND B = %d Is Not Equal To C = %d \t Answer = %d \n\n", a_olp, b_olp, b_olp,c_olp, result_olp);
	
	result_olp = (b_olp >= a_olp) || (a_olp == c_olp);
	printf("LOGICAL OR (||) : Answer is FALSE (0) If Only if BOTH Conditions are False. The Answer is True (1), If Any One Or Both Conditions Are True.\n\n");
	printf("Either B = %d Is greater Than Or Equal To A = %d OR A = %d Is Equal To C = %d \t Answer = %d \n\n", b_olp, a_olp, a_olp,c_olp,result_olp);

	result_olp = !a_olp;
	printf("A = %d And Using Lagical NOT (!) Operator on A Gives Result =%d\n\n",a_olp,result_olp);

	result_olp = !b_olp;
	printf("B = %d And Using Lagical NOT (!) Operator on B Gives Result =%d\n\n", b_olp, result_olp);

	result_olp = ! c_olp;
	printf("C = %d And Using Lagical NOT (!) Operator on C Gives Result =%d\n\n", c_olp, result_olp);

	result_olp = (!(a_olp <= b_olp) && !(b_olp != c_olp));
	printf("Using Logical NOT (!) On (a_olp <= b_olp) And Also On (b_olp != c_olp) And then ANDing them Afterwards Gives Result = %d\n", result_olp);

	printf("\n\n");

	result_olp = !((b_olp >= a_olp) || (a_olp == c_olp));
	printf("Using Logical NOT (!) On Entire Logical Expression ((b_olp >= a_olp) || (a_olp == c_olp) Gives Result = %d\n", result_olp);

	printf("\n\n");

	return (0);
}