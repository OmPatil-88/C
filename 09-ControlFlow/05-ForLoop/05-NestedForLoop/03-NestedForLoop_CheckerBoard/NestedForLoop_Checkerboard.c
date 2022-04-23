#include<stdio.h>
int main(void) {

	//variable declaration
	int i_olp, j_olp, c_olp;

	//code
	printf("\n\n");
	for (i_olp = 0; i_olp < 64; i_olp++) {
		for (j_olp = 0; j_olp < 64; j_olp++) {
			c_olp = ((i_olp & 0x8) == 0) ^ ((j_olp & 0x8) == 0);
			if (c_olp == 0) {
				printf("  ");
			}
			if (c_olp == 1) {
				printf("* ");
			}
		}
		printf("\n\n");
	}
	return (0);
}