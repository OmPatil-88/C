#include<stdio.h>

int main(void) {

	//code
	printf("\n\n");
	printf("Going On To Next Line... Using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
	printf("\"This is Double Quoted Output\" Done Using \\\" \\\" Escape Sequence \n\n");
	printf("\'This is Single Quoted Output\' Done Using \\\' \\\\' Escape Sqquece \n\n");
	printf("BACKSPACE Turned To BackSPACE\b Using Escape Sequence \\b\n\n");

	printf("\r Demonstrating Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating Carriage \r Return Using \\r Escape Sequence\n\n");

	printf("Demonstrating \x41 Using \\xhh Escape Sequence\n\n");
	printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n");

	return (0);
}