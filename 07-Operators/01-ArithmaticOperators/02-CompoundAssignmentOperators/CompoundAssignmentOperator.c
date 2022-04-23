#include<stdio.h>

int main(void) {

	//variable declaration
	int a_olp;
	int b_olp;
	int x_olp;

	//code
	printf("\n\n");
	printf("Enter A number : ");
	scanf("%d", &a_olp);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &b_olp);

	printf("\n\n");

	//Since, In All The Following 5 Cases, The Operand on The Left 'a_olp' Is Getting Repeated immeiately On The Right(e.g : a_olp=a_olp+b)
	//We Are Using Compound Assignment Operators +=, -=,*=,/= and %=
	
	//Since , 'a_olp' Will Be Assigned The Value Of(a_olp +b_olp) At The Expression (a+=b), We Must Save The Original Value Of 'a_olp' To Another Variable (x_olp)
	x_olp = a_olp;
	a_olp += b_olp;
	printf("Addition Of A = %d And B = %d Gives %d.\n", x_olp, b_olp, a_olp);

	//Value of a_olp is Altered In The Above Expression Is Used Here...
	//Since, 'a_olp' Will Be Assigned The value of (a_olp-b_olp) at the Expression (a-=b),We Must Save The Original Value Of 'a_olp' To another Variable (x_olp)
	
	x_olp = a_olp;
	a_olp -= b_olp;
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", x_olp, b_olp, a_olp);


	//Value of a_olp is Altered In The Above Expression Is Used Here...
	//Since, 'a_olp' Will Be Assigned The value of (a_olp*b_olp) at the Expression (a-=b),We Must Save The Original Value Of 'a_olp' To another Variable (x_olp)

	x_olp = a_olp;
	a_olp *= b_olp;
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", x_olp, b_olp, a_olp);

	//Value of a_olp is Altered In The Above Expression Is Used Here...
	//Since, 'a_olp' Will Be Assigned The value of (a_olp/b_olp) at the Expression (a-=b),We Must Save The Original Value Of 'a_olp' To another Variable (x_olp)

	x_olp = a_olp;
	a_olp /= b_olp;
	printf("Division Of A = %d And B = %d Gives Quetient %d.\n", x_olp, b_olp, a_olp);

	//Value of a_olp is Altered In The Above Expression Is Used Here...
	//Since, 'a_olp' Will Be Assigned The value of (a_olp % b_olp) at the Expression (a-=b),We Must Save The Original Value Of 'a_olp' To another Variable (x_olp)

	x_olp = a_olp;
	a_olp %= b_olp;
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", x_olp, b_olp, a_olp);

	printf("\n\n");

	return (0);
}