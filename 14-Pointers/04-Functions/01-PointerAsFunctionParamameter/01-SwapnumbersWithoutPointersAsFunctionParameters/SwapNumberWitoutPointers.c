#include<stdio.h>

int main(void) {

	//function declarations
	void SwapNumbers_olp(int, int);

	//variable declaration
	int a_olp;
	int b_olp;
     
	//code
	printf("\n\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &b_olp);

	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", a_olp);
	printf("Value Of 'B' = %d\n\n", b_olp);

	SwapNumbers_olp(a_olp, b_olp);

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", a_olp);
	printf("Value Of 'B' = %d\n\n", b_olp);

	return(0);
}
void SwapNumbers_olp(int x_olp, int y_olp) {
	int temp_olp;
	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", x_olp);
	printf("Value Of 'B' = %d\n\n", y_olp);

	temp_olp = x_olp;
	x_olp = y_olp;
	y_olp = temp_olp;

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", x_olp);
	printf("Value Of 'B' = %d\n\n", y_olp);
}