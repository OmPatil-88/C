#include<stdio.h>
int main(void) {

	//variable declaration
	int i_olp, j_olp, c_olp;

	//code
	printf("\n\n");
	i_olp = 0; 
	do{
		j_olp = 0; 
		do {
			c_olp = ((i_olp & 0x8) == 0) ^ ((j_olp & 0x8) == 0);
			if (c_olp == 0) {
				printf("  ");
			}
			if (c_olp == 1) {
				printf("* ");
			}
			j_olp++;
		} while (j_olp < 64);
		printf("\n\n");
		i_olp++;
	} while (i_olp < 64);
	return (0);
}